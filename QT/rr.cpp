#include "RR.h"
#include "LocalInfoRR.h"
#include "RRProcess.h"
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
//**********************************************************************************************************************************
RR::RR( )
{
    //dtor
}
//**********************************************************************************************************************************
RR::~RR( )
{
    //dtor
}
//**********************************************************************************************************************************
void RR::getQ( int q )
{
    this->q = q;
}
//**********************************************************************************************************************************
void RR::calculateResponseTime( Proces *processes , float *responseTime , int *startTime , int *finishTime , int programTime , int processCount )
{
    int position , i , processesCouonter, tempTC;
    float arrivalTime , serviceTime , TC , newProgramTime = programTime;
    bool finishedOneProcesses = false;
    setLocalInfoSRT( processes , processCount , responseTime );
    i = 0;
    LocalInfoRR rr;
    while ( processes[i].getArrivalTime( ) <= newProgramTime  && i < processCount )
    {
        if ( !processes[i].isCalculatedProcess( ) )
        {
            rr.setInfoRR( processes[i].getProcessName( ) , localProcesses[i].getArrivalTime( ) ,
                        localProcesses[i].getServiceTime( ) , i );
        }
        i ++;
    }
    RRProcess *j;
    while ( !isFinishedProcesses( processes , processCount ) )
    {
        j = rr.getFirstList( );
        if ( !j )
        {
            break;
        }
        position = j->index;
        arrivalTime = localProcesses[position].getArrivalTime( );
        TC = newProgramTime - arrivalTime;
        tempTC = 0;
        if ( TC < 0 )
        {
            tempTC = fabs( TC );
            TC = 0;
        }
        if( processes[position].getServiceTime() == localProcesses[position].getServiceTime() )
        {
            startTime[position] = TC + processes[position].getArrivalTime();
        }
        if ( localProcesses[position].getServiceTime( ) < q )
        {
            int newPartCount = localProcesses[position].getPartCount( ) + localProcesses[position].getServiceTime( );
            localProcesses[position].setPartCount( newPartCount );
            newProgramTime += ( tempTC + localProcesses[position].getServiceTime( ) );
            responseTime[position] += ( TC + localProcesses[position].getServiceTime( ) );

        }
        else
        {
            int newPartCount = localProcesses[position].getPartCount( ) + q;
            localProcesses[position].setPartCount( newPartCount );
            newProgramTime += ( tempTC + q );
            responseTime[position] += ( TC + q );
            int newServiceTime = localProcesses[position].getServiceTime( ) - q;
            localProcesses[position].setServiceTime( newServiceTime );
        }

        processes[position].setArrivalTime( newProgramTime );
        localProcesses[position].setArrivalTime( newProgramTime );

        if ( localProcesses[position].getPartCount( ) == processes[position].getServiceTime( ) )
        {
            processes[position].setCalculatedProcess( true );
            responseTime[position] /= processes[position].getServiceTime( );
            finishTime[position] = newProgramTime;
            finishedOneProcesses = true;
            rr.deleteInfoRR( processes[position].getProcessName( ) );
        }
        else
        {
            rr.deleteInfoRR( processes[position].getProcessName( ) );
        }
        while ( processes[i].getArrivalTime( ) <= newProgramTime && i < processCount )
        {
            if ( !processes[i].isCalculatedProcess( ) )
            {
                rr.setInfoRR( processes[i].getProcessName( ) , localProcesses[i].getArrivalTime( ) ,
                    localProcesses[i].getServiceTime( ) , i );
            }
            i ++;
        }
        if ( !processes[position].isCalculatedProcess( ) )
        {
            rr.setInfoRR( processes[position].getProcessName( ) , localProcesses[position].getArrivalTime( ) ,
                localProcesses[position].getServiceTime( ) , position );
        }
    }
}
//**********************************************************************************************************************************
void RR::setLocalInfoSRT( Proces *processes , int processCount , float *responseTime )
{
    localProcesses = new LcoalInfoSRT[processCount];
    int i;
    for ( i = 0 ; i < processCount; i ++ )
    {
        localProcesses[i].setProcessName( processes[i].getProcessName( ) );
        localProcesses[i].setServiceTime( processes[i].getServiceTime( ) );
        localProcesses[i].setArrivalTime( processes[i].getArrivalTime( ) );
    }
}
//**********************************************************************************************************************************
bool RR::isFinishedProcesses( Proces *processes ,int processCount)
{
    int i;
    for ( i = 0 ; i < processCount ; i ++ )
    {
        if ( !processes[i].isCalculatedProcess( ) )
        {
            return false;
        }
    }
    return true;
}
//**********************************************************************************************************************************

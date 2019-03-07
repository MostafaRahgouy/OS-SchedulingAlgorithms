#include "SuggestedAlgoritm.h"
#include <iostream>
#include <string>
#include <math.h>
#include "LocalInfoRR.h"
#include "RRProcess.h"
using namespace std;
//**********************************************************************************************************************************
SuggestedAlgoritm::SuggestedAlgoritm( )
{
}
//**********************************************************************************************************************************
SuggestedAlgoritm::~SuggestedAlgoritm( )
{
}
//**********************************************************************************************************************************
void SuggestedAlgoritm::calculateResponseTime( Proces *processes , float *responseTime ,int *startTime , int *finishTime, int programTime , int processCount )
{
    int position , i , minimumServiceTime , processesCouonter, tempTC;
    float arrivalTime , serviceTime , TC , newProgramTime = programTime , R , maximumR = 0;
    bool finishedOneProcesses = false;
    setLocalInfoSRT( processes , processCount , responseTime );
    for ( processesCouonter = 0 ; processesCouonter < processCount ; processesCouonter ++ )
    {
        position = processesCouonter;
        finishedOneProcesses = false;
        while ( !finishedOneProcesses )
        {
            i = 0;
            maximumR = 0;
            while ( processes[i].getArrivalTime( ) <= newProgramTime && i < processCount )
            {
                TC = newProgramTime - processes[i].getArrivalTime( );
                if ( TC < 0 )
                {
                    TC = 0;
                }
                R = ( TC + processes[i].getServiceTime( ) ) / processes[i].getServiceTime( ) ;
                if ( !processes[i].isCalculatedProcess( ) && maximumR < R )
                {
                    maximumR = R;
                    position = i;
                }
                i ++;
            }
            arrivalTime = localProcesses[position].getArrivalTime( );
            int newServiceTime = localProcesses[position].getServiceTime( ) - 1 ;
            TC = newProgramTime - arrivalTime;
            tempTC = 0;
            if ( TC < 0 )
            {
                tempTC = fabs( TC );
                TC = 0;
            }
            if( processes[position].getServiceTime() == localProcesses[position].getServiceTime() )
            {
                startTime[position] = ( TC + processes[position].getArrivalTime() );
            }
            localProcesses[position].setServiceTime( newServiceTime );
            int newPartCount = localProcesses[position].getPartCount( ) + 1;
            localProcesses[position].setPartCount( newPartCount );
            newProgramTime += ( 1 + tempTC );
            processes[position].setArrivalTime( newProgramTime );
            localProcesses[position].setArrivalTime( newProgramTime );
            responseTime[position] += ( 1 + TC );
            if ( localProcesses[position].getPartCount( ) == processes[position].getServiceTime( ) )
            {
                finishTime[position] = newProgramTime;
                processes[position].setCalculatedProcess( true );
                responseTime[position] /= processes[position].getServiceTime( );
                finishedOneProcesses = true;
            }

        }
    }
}
//**********************************************************************************************************************************
void SuggestedAlgoritm::setLocalInfoSRT( Proces *processes , int processCount , float *responseTime )
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

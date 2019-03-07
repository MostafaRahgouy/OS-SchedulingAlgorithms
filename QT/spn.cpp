#include "SPN.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//**********************************************************************************************************************************
SPN::SPN( )
{
    //dtor
}
//**********************************************************************************************************************************
SPN::~SPN( )
{
    //dtor
}
//**********************************************************************************************************************************
void SPN::calculateResponseTime( Proces *processes , float *responseTime , int *startTime , int *finishTime , int programTime , int processCount)
{
    int position , i , processesCouonter , tempTC;
    Proces minimumServiceTime;
    float arrivalTime , serviceTime , TC , newProgramTime = programTime;
    for ( processesCouonter = 0 ; processesCouonter < processCount ; processesCouonter ++ )
    {
        i = 0;
        minimumServiceTime.setServiceTime( 100 );
        position = processesCouonter;
        while ( processes[i].getArrivalTime( ) <  newProgramTime && i < processCount )
        {
            if ( !processes[i].isCalculatedProcess( ) && processes[i].getServiceTime( ) < minimumServiceTime.getServiceTime( ) )
            {
                minimumServiceTime = processes[i];
                position = i;
            }
            i ++;
        }
        arrivalTime = processes[position].getArrivalTime( );
        serviceTime = processes[position].getServiceTime( );
        TC = newProgramTime - arrivalTime;
        tempTC = 0;
        if ( TC < 0 )
        {
            tempTC = fabs( TC );
            TC = 0;
        }
        startTime[position] = arrivalTime + TC;
        responseTime[position] = ( TC + serviceTime ) / serviceTime ;
        newProgramTime += ( serviceTime + tempTC );
        finishTime[position] = newProgramTime;
        processes[position].setCalculatedProcess( true );
    }
}
//**********************************************************************************************************************************

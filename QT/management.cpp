#include "management.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include "fcfs.h"
#include "hrrn.h"
#include "spn.h"
#include "rr.h"
#include "srt.h"
#include "suggestedalgoritm.h"

using namespace std;
//*****************************************************************************************************************************************************
Management::Management( int processCount )
{
    this->processCount = processCount;
    processes = new Proces[processCount];
    responseTime = new float[processCount];
    finishTime = new int[processCount];
    startTime = new int[processCount];
    programTime = 0;
    initResponseTime( );
}
//*****************************************************************************************************************************************************
int Management::getProcessCount()
{
    return this->processCount;
}
//*****************************************************************************************************************************************************
void Management::setProcessCount( int processCount )
{
    this->processCount = processCount;
}
//*****************************************************************************************************************************************************
void Management::initResponseTime( )
{
    int i;
    for ( i = 0; i < processCount; i ++ )
    {
        responseTime[i] = 0;
        finishTime[i] = 0;
        startTime[i] = 0;
    }
}
//**********************************************************************************************************************************
Proces *Management::getProcesses( )
{
    return processes;
}
//**********************************************************************************************************************************
void Management::setProcesses( string processName , int arrivalTime , int serviceTime , int position )
{
    processes[position] = Proces( processName , arrivalTime , serviceTime );
}
//**********************************************************************************************************************************
void Management::check( )
{
    int i;
    cout << left << setw(13) << "processName" << setw(13) << "arrivalTime" << setw(11) <<"serviceTime" << endl;
    for ( i = 0 ; i < processCount; i ++ )
    {
        cout << left << setw(13) << processes[i].getProcessName( )
             << setw(13) << processes[i].getArrivalTime( )
             << setw(11) << processes[i].getServiceTime( ) << endl;
    }
    cout << "__________________________________________________" << endl;
}
//**********************************************************************************************************************************
void Management::sortProcesses( )
{
    int i , j;
    Proces temp;
    for ( i = processCount - 1 ; i >= 0 ; i -- )
    {
        for ( j = 0; j < i; j ++ )
        {
            if ( processes[j].getArrivalTime( ) > processes[j + 1].getArrivalTime( ) )
            {
                temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
}
//**********************************************************************************************************************************
void Management::setMenuNumber( int menuNumber )
{
    if ( menuNumber <= 0 || menuNumber >= 7 )
    {
        this->menuNumber = 1;
    }
    else
    {
        this->menuNumber = menuNumber;
    }
}
//**********************************************************************************************************************************
void Management::selectSchedulingAlgoritme( )
{
    sortProcesses( );
    check( );
    Scheduler *Algoritm;
    switch ( menuNumber )
    {
        case 1:
            Algoritm = new FCFS( );
            Algoritm->calculateResponseTime( processes , responseTime , startTime , finishTime , programTime , processCount );
            break;
        case 2:
            Algoritm = new RR( );
            Algoritm->getQ( q );
            Algoritm->calculateResponseTime( processes , responseTime , startTime , finishTime , programTime , processCount );
            break;
        case 3:
            Algoritm = new SPN( );
            Algoritm->calculateResponseTime( processes , responseTime , startTime , finishTime , programTime , processCount );
            break;
        case 4:
            Algoritm = new SRT( );
            Algoritm->calculateResponseTime( processes , responseTime , startTime , finishTime , programTime , processCount );
            break;
        case 5:
            Algoritm = new HRRN( );
            Algoritm->calculateResponseTime( processes , responseTime , startTime , finishTime , programTime , processCount );
            break;
        case 6:
            Algoritm = new SuggestedAlgoritm();
            Algoritm->calculateResponseTime( processes , responseTime , startTime , finishTime , programTime , processCount );
            break;
    }
}
//**********************************************************************************************************************************
void Management::setQ( int q )
{
    this->q = q;
}
//**********************************************************************************************************************************
int Management::getQ( )
{
    return this->q;
}
//**********************************************************************************************************************************
void Management::AssessorAlgoritms( )
{
}
//**********************************************************************************************************************************
float Management::getResponeTime( int position )
{
    return responseTime[position];
}
//**********************************************************************************************************************************
int Management::getStartTime( int position )
{
    return startTime[position];
}
//**********************************************************************************************************************************
int Management::getFinishTime( int position )
{
    return finishTime[position];
}

#include "stdafx.h"
#include "FCFS.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//**********************************************************************************************************************************
FCFS::FCFS()
     :Scheduler()
{
	//dtor
}
//**********************************************************************************************************************************
FCFS::~FCFS( )
{
	//dtor
}
//**********************************************************************************************************************************
void FCFS::calculateResponseTime( Process *processes , float *responseTime , int *startTime , int *finishTime , int programTime , int processCount )
{
	int position , processesCouonter, tempTC;
	float arrivalTime , serviceTime , TC , newProgramTime;
	newProgramTime = programTime;
	for ( processesCouonter = 0 ; processesCouonter < processCount ; processesCouonter ++ )
	{
		position = processesCouonter;
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
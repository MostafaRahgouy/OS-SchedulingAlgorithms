#include "stdafx.h"
#include "HRRN.h"
#include <iostream>
#include <math.h>
using namespace std;
//**********************************************************************************************************************************
HRRN::HRRN( )
{
	//dtor
}
//**********************************************************************************************************************************
HRRN::~HRRN( )
{
	//dtor
}
//**********************************************************************************************************************************
void HRRN::calculateResponseTime( Process *processes , float *responseTime , int *startTime , int *finishTime , int programTime , int processCount )
{
	int position , processesCouonter , i , tempTC;
	float arrivalTime , serviceTime , TC , newProgramTime = programTime;
	float maximumR = 0 , R;
	for ( processesCouonter = 0 ; processesCouonter < processCount ; processesCouonter ++ )
	{
		i = 0;
		maximumR = 0;
		position = processesCouonter;
		while ( processes[i].getArrivalTime( ) <  newProgramTime && i < processCount )
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


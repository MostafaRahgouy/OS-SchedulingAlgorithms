// Implementation os.cpp : Defines the entry point for the console application.
//
//**********************************************************************************************************************************
#include "stdafx.h"
#include "Management.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//**********************************************************************************************************************************
int getProcessCount( );
void setProcesses( Management , int );
int menu( );
int getQ( );
void printAnswers( Management , int );
//**********************************************************************************************************************************
int _tmain(int argc, _TCHAR* argv[])
{
	int numberMenu;
	int processCount = getProcessCount( );
	Management processes( processCount );
	setProcesses( processes , processCount );
	numberMenu = menu( );
	processes.setMenuNumber( numberMenu );
	if ( numberMenu == 2 )
	{
		processes.setQ( getQ( ) );
	}
	processes.selectSchedulingAlgoritme( );
	printAnswers( processes , processCount );
	cin.get( );
	cin.get( );
	return 0;
}
//**********************************************************************************************************************************
int getProcessCount( )
{
	int processCount;
	cout << "Enter the process count :";
	cin >> processCount;
	system( "cls" );
	return processCount;
}
//**********************************************************************************************************************************
void setProcesses( Management processes , int processCount )
{
	string processName;
	int i , arrivalTime , serviceTime;
	for ( i = 0 ; i < processCount ; i ++ )
	{
		cout << "Enter the processName[" << i + 1 << "]:";
		cin.get( );
		getline( cin , processName );
		cout << "Enter the arrivalTime[" << i + 1 << "]:";
		cin >> arrivalTime;
		cout << "Enter the serviceTime[" << i + 1 << "]:";
		cin >> serviceTime;
		processes.setProcesses( processName , arrivalTime , serviceTime , i );
		cout << "__________________________________________________________" << endl;
	}
}
//**********************************************************************************************************************************
int menu( )
{
	int select;
	cout << "                           M E N U                          " << endl;
	cout << "____________________________________________________________" << endl;
	cout << " 1. First Come First Served (FCFS)                          " << endl;
	cout << " 2. Round Robin (RR)                                        " << endl;
	cout << " 3. Shortest Process Next (SPN)                             " << endl;
	cout << " 4. Shortest Remaining Time (SRT)                           " << endl;
	cout << " 5. Highest Response Ratio Next (HRRN)                      " << endl;
	cout << " 6. suggested Algoritm                                      " << endl;
	cout << "____________________________________________________________" << endl;
	cout << "Choose an option : ";
	cin >> select;
	return select;
}
//**********************************************************************************************************************************
int getQ( )
{
	int q;
	cout << "Enter the q for calclulate RR :";
	cin >> q;
	system( "cls" );
	return q;
}
//**********************************************************************************************************************************
void printAnswers( Management processes , int processCount )
{
	int i;
	for ( i = 0 ; i < processCount ; i ++ )
	{
		cout << "processName : " << processes.getProcessName( i ) << endl;
		cout << "startTime   : " << processes.getStartTime( i ) << endl;
		cout << "finishTime  : " << processes.getFinishTime( i ) << endl;
		cout << "responseTime: " << processes.getResponseTime( i ) << endl;
		cout << "________________________________________________________" << endl;
	}
}
//**********************************************************************************************************************************
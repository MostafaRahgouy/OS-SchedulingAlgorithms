#include "stdafx.h"
#include "Process.h"
#include <iostream>
#include <string>
using namespace std;
//**********************************************************************************************************************************
Process::Process( string processName , int arrivalTime , int serviceTime )
{
	this->processName = processName;
	this->arrivalTime = arrivalTime;
	this->serviceTime = serviceTime;
	calculatedProcess = false;
}
//**********************************************************************************************************************************
Process::Process( )
{
	//dtor
}
//**********************************************************************************************************************************
Process::~Process( )
{
	//dtor
}
//**********************************************************************************************************************************
void Process::setArrivalTime( int arrivalTime )
{
	this->arrivalTime = arrivalTime;
}
//**********************************************************************************************************************************
void Process::setServiceTime( int serviceTime )
{
	this->serviceTime = serviceTime;
}
//**********************************************************************************************************************************
void Process::setProcessName( string processName )
{
	this->processName = processName;
}
//**********************************************************************************************************************************
int Process::getArrivalTime( )
{
	return this->arrivalTime;
}
//**********************************************************************************************************************************
int Process::getServiceTime( )
{
	return this->serviceTime;
}
//**********************************************************************************************************************************
string Process::getProcessName( )
{
	return this->processName;
}
//**********************************************************************************************************************************
bool Process::isCalculatedProcess( )
{
	return calculatedProcess;
}
//**********************************************************************************************************************************
void Process::setCalculatedProcess( bool calculatedProcess )
{
	this->calculatedProcess = calculatedProcess;
}
//**********************************************************************************************************************************
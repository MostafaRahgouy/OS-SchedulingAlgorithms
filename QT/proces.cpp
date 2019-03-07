#include "proces.h"
#include <iostream>
#include <string>
using namespace std;
//***************************************************************************************************************************
Proces::Proces( string processName , int arrivalTime , int serviceTime )
{
    this->processName = processName;
    this->arrivalTime = arrivalTime;
    this->serviceTime = serviceTime;
    calculatedProcess = false;
}
//***************************************************************************************************************************
Proces::Proces( )
{
    //dtor
}
//***************************************************************************************************************************
Proces::~Proces( )
{
    //dtor
}
//***************************************************************************************************************************
void Proces::setArrivalTime( int arrivalTime )
{
    this->arrivalTime = arrivalTime;
}
//***************************************************************************************************************************
void Proces::setServiceTime( int serviceTime )
{
    this->serviceTime = serviceTime;
}
//***************************************************************************************************************************
void Proces::setProcessName( string processName )
{
    this->processName = processName;
}
//***************************************************************************************************************************
int Proces::getArrivalTime( )
{
    return this->arrivalTime;
}
//***************************************************************************************************************************
int Proces::getServiceTime( )
{
    return this->serviceTime;
}
//***************************************************************************************************************************
string Proces::getProcessName( )
{
    return this->processName;
}
//***************************************************************************************************************************
bool Proces::isCalculatedProcess( )
{
    return calculatedProcess;
}
//***************************************************************************************************************************
void Proces::setCalculatedProcess( bool calculatedProcess )
{
    this->calculatedProcess = calculatedProcess;
}
//***************************************************************************************************************************

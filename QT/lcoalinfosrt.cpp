#include "lcoalinfosrt.h"
#include "LcoalInfoSRT.h"
#include <iostream>
#include <string>
using namespace std;
//**********************************************************************************************************************************
LcoalInfoSRT::LcoalInfoSRT( )
{
    partCount = 0;
}
//**********************************************************************************************************************************
LcoalInfoSRT::~LcoalInfoSRT( )
{
}
//**********************************************************************************************************************************
void LcoalInfoSRT::setPartCount( int partCount )
{
    this->partCount = partCount;
}
//**********************************************************************************************************************************
int LcoalInfoSRT::getPartCount( )
{
    return this->partCount;
}
//**********************************************************************************************************************************
void LcoalInfoSRT::setProcessName( string processName )
{
    this->processName = processName;
}
//**********************************************************************************************************************************
void LcoalInfoSRT::setServiceTime( int serviceTime )
{
    this->serviceTime = serviceTime;
}
//**********************************************************************************************************************************
int LcoalInfoSRT::getServiceTime( )
{
    return this->serviceTime;
}
//**********************************************************************************************************************************
void LcoalInfoSRT::setArrivalTime( int arrivalTime )
{
    this->arrivalTime = arrivalTime;
}
//**********************************************************************************************************************************
int LcoalInfoSRT::getArrivalTime( )
{
    return this->arrivalTime;
}
//**********************************************************************************************************************************

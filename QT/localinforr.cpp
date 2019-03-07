#include "LocalInfoRR.h"
#include <iostream>
#include <string>
using namespace std;
//**********************************************************************************************************************************
LocalInfoRR::LocalInfoRR( )
{
    firstList = lastList = NULL;
}
//**********************************************************************************************************************************
LocalInfoRR::~LocalInfoRR( )
{
    //dtor
}
//**********************************************************************************************************************************
void LocalInfoRR::setInfoRR( string processName , int arrivalTime ,int serviceTime , int index)
{
    RRProcess *newProcess = new RRProcess( );
    newProcess->next = NULL;
    newProcess->arrivalTime = arrivalTime;
    newProcess->serviceTime = serviceTime;
    newProcess->processName = processName;
    newProcess->index = index;
    if ( firstList == NULL )
    {
        firstList = lastList = newProcess;
    }
    else
    {
        lastList->next = newProcess;
        lastList = newProcess;
    }
}
//**********************************************************************************************************************************
void LocalInfoRR::deleteInfoRR( string processName )
{
    RRProcess *currectProcess = firstList , *nextProcess = firstList;
    while ( nextProcess )
    {
        if ( nextProcess->processName == processName )
        {
            if ( nextProcess == firstList )
            {
                firstList = firstList->next;
            }
            else
            {
                if ( nextProcess == lastList )
                {
                    lastList = currectProcess;
                }
                currectProcess->next = nextProcess->next;
            }
            delete nextProcess;
            break;
        }
        else
        {
            currectProcess = nextProcess;
            nextProcess = nextProcess->next;
        }
    }
}
//**********************************************************************************************************************************
RRProcess *LocalInfoRR::getFirstList( )
{
    return firstList;
}
//**********************************************************************************************************************************
RRProcess *LocalInfoRR::getLastList( )
{
    return lastList;
}
//**********************************************************************************************************************************

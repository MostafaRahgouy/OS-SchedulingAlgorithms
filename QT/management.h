#ifndef MANAGEMENT_H
#define MANAGEMENT_H
//*****************************************************************************************************************************************************
#include <iostream>
#include <string>
#include "proces.h"
using namespace std;
//*****************************************************************************************************************************************************
class Management
{
    public:
        Management( int );
        int getProcessCount();
        void setProcessCount( int );
        Proces *getProcesses();
        float getResponeTime( int );
        int getStartTime( int );
        int getFinishTime( int );
        void setProcesses( string , int , int , int );
        void setMenuNumber( int );
        void selectSchedulingAlgoritme( );
        void check( );
        void setQ( int );
        int getQ( );
    protected:
    private:
        int processCount;
        int programTime;
        int menuNumber;
        float *responseTime;
        int *finishTime;
        int *startTime;
        Proces *processes;
        void sortProcesses( );
        void initResponseTime( );
        void AssessorAlgoritms( );
        int q;
};
//*****************************************************************************************************************************************************
#endif // MANAGEMENT_H

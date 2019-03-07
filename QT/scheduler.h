#ifndef SCHEDULER_H
#define SCHEDULER_H
//**********************************************************************************************************************************
#include <iostream>
#include <string>
#include "proces.h"
using namespace std;
//**********************************************************************************************************************************
class Scheduler
{
    public:
        Scheduler();
        ~Scheduler( );
        virtual void calculateResponseTime( Proces * , float * , int * , int * , int , int ) = 0;
        virtual void getQ( int );
    protected:
    private:
};
//**********************************************************************************************************************************
#endif // SCHEDULER_H

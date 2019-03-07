#ifndef RR_H
#define RR_H
//**********************************************************************************************************************************
#include "Scheduler.h"
#include "LocalInfoRR.h"
#include "LcoalInfoSRT.h"
#include "RRProcess.h"
//**********************************************************************************************************************************
class RR:public Scheduler
{
    public:
        RR( );
        ~RR( );
        virtual void calculateResponseTime( Proces * , float * , int * , int * , int , int );
        virtual void getQ( int );
    protected:
    private:
        bool isFinishedProcesses( Proces * ,int );
        LcoalInfoSRT *localProcesses;
        void setLocalInfoSRT( Proces * , int , float * );
        int q;
};
//**********************************************************************************************************************************
#endif // RR_H

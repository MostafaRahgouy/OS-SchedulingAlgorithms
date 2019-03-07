#ifndef SRT_H
#define SRT_H
//**********************************************************************************************************************************
#include "Scheduler.h"
#include "LcoalInfoSRT.h"
//**********************************************************************************************************************************
class SRT:public Scheduler
{
    public:
        SRT( );
        ~SRT( );
        virtual void calculateResponseTime( Proces * , float * , int * , int * , int , int );
    protected:
    private:
        LcoalInfoSRT *localProcesses;
        void setLocalInfoSRT( Proces * , int , float * );
};
//**********************************************************************************************************************************
#endif // SRT_H

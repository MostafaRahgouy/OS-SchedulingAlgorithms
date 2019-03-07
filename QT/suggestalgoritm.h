#ifndef SUGGESTALGORITM_H
#define SUGGESTALGORITM_H
//**********************************************************************************************************************************
#include "Scheduler.h"
//**********************************************************************************************************************************
class SuggestedAlgoritm:public Scheduler
{
    public:
        SuggestedAlgoritm( );
        ~SuggestedAlgoritm( );
    protected:
    private:
        virtual void calculateResponseTime( Proces * , float * , int * , int * , int , int );
};
//**********************************************************************************************************************************
#endif // SUGGESTALGORITM_H

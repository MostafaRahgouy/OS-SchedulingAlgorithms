#ifndef SUGGESTEDALGORITM_H
#define SUGGESTEDALGORITM_H
//**********************************************************************************************************************************
#include "Scheduler.h"
#include "LcoalInfoSRT.h"
//**********************************************************************************************************************************
class SuggestedAlgoritm:public Scheduler
{
    public:
        SuggestedAlgoritm( );
        ~SuggestedAlgoritm( );
    protected:
    private:
        virtual void calculateResponseTime( Proces * , float * , int *, int *, int , int );
        LcoalInfoSRT *localProcesses;
        void setLocalInfoSRT( Proces * , int , float * );
};
//**********************************************************************************************************************************
#endif //SUGEESTEDALGORITM_H

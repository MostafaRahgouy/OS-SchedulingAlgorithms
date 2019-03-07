#ifndef SCHEDULER_H
#define SCHEDULER_H
//**********************************************************************************************************************************
#include "Process.h"
//**********************************************************************************************************************************
class Scheduler
{
	public:
		Scheduler();
		~Scheduler( );
		virtual void calculateResponseTime( Process * , float * , int * , int * , int , int ) = 0;
		virtual void getQ( int );
	protected:
	private:
};
//**********************************************************************************************************************************
#endif //SCHEDULER_H
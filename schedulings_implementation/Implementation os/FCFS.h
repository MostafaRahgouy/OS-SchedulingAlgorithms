#ifndef FCFS_H
#define FCFS_H
//**********************************************************************************************************************************
#include "Scheduler.h"
//**********************************************************************************************************************************
class FCFS:public Scheduler
{
	public:
		FCFS();
		~FCFS( );
		virtual void calculateResponseTime( Process * , float * , int *, int * , int , int ) ;
	protected:
	private:
};
//**********************************************************************************************************************************
#endif //FCFS_H
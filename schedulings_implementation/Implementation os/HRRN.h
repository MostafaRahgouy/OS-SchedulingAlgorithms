#ifndef HRRN_H
#define HRRN_H
//**********************************************************************************************************************************
#include "Scheduler.h"
//**********************************************************************************************************************************
class HRRN:public Scheduler
{
	public:
		HRRN( );
		~HRRN( );
		virtual void calculateResponseTime( Process * , float * , int * , int * , int , int );
	protected:
	private:
};
//**********************************************************************************************************************************
#endif //HRRN_H
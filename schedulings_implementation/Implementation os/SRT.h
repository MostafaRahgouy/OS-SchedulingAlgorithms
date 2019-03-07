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
		virtual void calculateResponseTime( Process * , float * , int * , int * , int , int );
	protected:
	private:
		LcoalInfoSRT *localProcesses;
		void setLocalInfoSRT( Process * , int , float * );
};
//**********************************************************************************************************************************
#endif // SRT_H

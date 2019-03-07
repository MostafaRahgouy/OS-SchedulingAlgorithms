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
		virtual void calculateResponseTime( Process * , float * , int * , int * , int , int );
		virtual void getQ( int );
	protected:
	private:
		bool isFinishedProcesses( Process * ,int );
		LcoalInfoSRT *localProcesses;
		void setLocalInfoSRT( Process * , int , float * );
		int q;
};
//**********************************************************************************************************************************
#endif //RR_H
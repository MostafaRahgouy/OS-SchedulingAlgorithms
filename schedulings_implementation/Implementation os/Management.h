#ifndef MANAGEMENT_H
#define MANAGEMENT_H
//**********************************************************************************************************************************
#include "Process.h"
#include "Scheduler.h"
//**********************************************************************************************************************************
class Management
{
	public:
		Management( int );
	   ~Management( );
	   int getProcessCount();
	   Process *getProcesses();
	   void setProcesses( string , int , int , int );
	   void setMenuNumber( int );
	   void selectSchedulingAlgoritme( );
	   void check( );
	   void setQ( int );
	   int getQ( );
	   float getResponseTime( int );
	   int getFinishTime( int );
	   int getStartTime( int );
	   string getProcessName( int );
	protected:
	private:
		int processCount;
		int programTime;
		int menuNumber;
		float *responseTime;
		int *startTime;
		int *finishTime;
		Process *processes;
		void sortProcesses( );
		void initResponseTime( );
		void AssessorAlgoritms( );
		int q;
};
//**********************************************************************************************************************************
#endif //MANAGEMENT_H
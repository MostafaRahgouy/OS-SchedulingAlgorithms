#ifndef PROCESS_H
#define PROCESS_H
//**********************************************************************************************************************************
#include <iostream>
#include <string>
using namespace std;
//**********************************************************************************************************************************
class Process
{
	public:
		Process( string , int , int );
		Process( );
		~Process( );
		void setArrivalTime( int );
		void setServiceTime( int );
		void setProcessName( string );
		
		int getArrivalTime( );
		int getServiceTime( );
		string getProcessName( );
		bool isCalculatedProcess( );
		void setCalculatedProcess( bool );
	protected:
	private:
		int arrivalTime;
		int serviceTime;
		string processName;
		bool calculatedProcess;
};
//**********************************************************************************************************************************
#endif //PROCESS_H
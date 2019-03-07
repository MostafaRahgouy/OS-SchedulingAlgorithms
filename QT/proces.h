#ifndef PROCES_H
#define PROCES_H
#include <iostream>
#include <string>
//***************************************************************************************************************************
using namespace std;
class Proces
{
    public:
        Proces( string , int , int );
        Proces( );
        ~Proces( );
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
//***************************************************************************************************************************
#endif // PROCES_H

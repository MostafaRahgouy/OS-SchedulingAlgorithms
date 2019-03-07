#ifndef LCOALINFOSRT_H
#define LCOALINFOSRT_H
//**********************************************************************************************************************************
#include <iostream>
#include <string>
using namespace std;
//**********************************************************************************************************************************
class LcoalInfoSRT
{
    public:
        LcoalInfoSRT( );
        ~LcoalInfoSRT( );
        void setPartCount( int );
        int getPartCount( );
        void setProcessName( string );
        void setServiceTime( int );
        int getServiceTime( );
        void setArrivalTime( int );
        int getArrivalTime( );
    protected:
    private:
        string processName;
        int serviceTime;
        int arrivalTime;
        int partCount;
};
//**********************************************************************************************************************************
#endif // LCOALINFOSRT_H

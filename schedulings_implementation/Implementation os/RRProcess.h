#ifndef RRPROCESS_H_INCLUDED
#define RRPROCESS_H_INCLUDED
//**********************************************************************************************************************************
#include <string>
#include <iostream>
using namespace std;
//**********************************************************************************************************************************
class LocalInfoRR;
class RR;
class RRProcess
{
	friend class LocalInfoRR;
	friend class RR;
	string processName;
	int arrivalTime;
	int serviceTime;
	int index;
	RRProcess *next;
};
//**********************************************************************************************************************************
#endif //RRPROCESS_H_INCLUDED
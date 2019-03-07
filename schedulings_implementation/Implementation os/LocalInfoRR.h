#ifndef LOCALINFORR_H
#define LOCALINFORR_H
//**********************************************************************************************************************************
#include "RRProcess.h"
//**********************************************************************************************************************************
class LocalInfoRR
{
	public:
	
		LocalInfoRR( );
		~LocalInfoRR( );
		void setInfoRR( string , int , int , int );
		void deleteInfoRR( string  );
		RRProcess *getFirstList( ); 
		RRProcess *getLastList( ); 
	protected:
	private:
		RRProcess *firstList;
		RRProcess *lastList;
};
//**********************************************************************************************************************************
#endif //LOCALINFORR_H
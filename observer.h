/*			HEADER
*******************************************************************
***								***
*** Programmer: Chikkappagari Sreekanth				***
***								***
*** File: observer.h						***
***								***
*** Date: 07/02/2019						***
***								***
*******************************************************************
*/
#ifndef OBSERVER_HEADER
#define OBSERVER_HEADER

#include<iostream>
class CObserver {
    public:
	virtual void obs_update(char degree, float temperature) = 0;
};

#endif

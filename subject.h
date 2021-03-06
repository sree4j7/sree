/*			HEADER
*******************************************************************
***								***
*** Programmer: Chikkappagari Sreekanth				***
***								***
*** File: subject.h						***
***								***
*** Date: 07/02/2019						***
***								***
*******************************************************************
*/
#ifndef SUBJECT_HEADER
#define SUBJECT_HEADER 

#include<iostream>
#include"observer.h"
class CSubject {
    public:
        virtual void sub_subscribed(CObserver *observer) = 0;
        virtual void sub_unsubscribed(CObserver *observer) = 0;
        virtual void sub_notify(void) = 0;
};

#endif


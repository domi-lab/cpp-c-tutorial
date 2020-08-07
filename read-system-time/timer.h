
#ifndef TIMER_H
#define TIMER_H

#include <iostream>

using namespace std;

class Timer
{
public:
    /**
    * Timer constructor
    */
    Timer();

    /**
    * Return second
    */
    int EverySecond();

    /**
    * Return minute
    */
    int EveryMinute();

    /**
    * Return timestamp
    */
    string TimeStamp();
};

#endif
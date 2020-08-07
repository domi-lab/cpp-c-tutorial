#include "timer.h"

Timer::Timer()
{
}

int Timer::EverySecond()
{
    time_t the_time = time(NULL);
    struct tm *a_time = localtime(&the_time);
    return a_time->tm_sec;
}

int Timer::EveryMinute()
{
    time_t the_time = time(NULL);
    struct tm *a_time = localtime(&the_time);
    return (a_time->tm_min);
}

string Timer::TimeStamp()
{
    time_t the_time = time(NULL);
    struct tm *a_time = localtime(&the_time);
    int day = a_time->tm_mday;
    int month = a_time->tm_mon + 1;
    int year = a_time->tm_year + 1900;
    string timestamp = (to_string(year) + "-" + to_string(month) + "-" + to_string(day) + "_" + to_string(a_time->tm_hour) + ":" + to_string(a_time->tm_min) + ":" + to_string(a_time->tm_sec));
    return timestamp;
}
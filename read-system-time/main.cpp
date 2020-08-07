#include "timer.h"
#include <unistd.h>

int main()
{
    Timer *timer;
    timer = new Timer;
    while (true)
    {
        cout << "Every second: " << timer->EverySecond() << endl;
        cout << "Every minute: " << timer->EveryMinute() << endl;
        cout << "Timestamp: " << timer->TimeStamp() << endl;
        if (timer->EverySecond() == 5)
        {
            break; //exit while loop
        }
        usleep(1000);
    }

    return 0;
}
#include <stdio.h>
typedef struct time
{
    int hour;
    int minutes;
    int seconds;
} time;

void display(time t)
{
    printf("The time is: %dhrs %dmins %dsecs \n", t.hour, t.minutes, t.seconds);
}

int timecmp(time t1, time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    if (t1.hour < t2.hour)
    {
        return -1;
    }
    if (t1.minutes > t2.minutes)
    {
        return 1;
    }
    if (t1.minutes < t2.minutes)
    {
        return -1;
    }
    if (t1.seconds > t2.seconds)
    {
        return 1;
    }
    if (t1.seconds < t2.seconds)
    {
        return -1;
    }
    return 0;
}

int main()
{
    time t1 = {8, 43, 23};
    time t2 = {4, 38, 45};
    display(t1);
    display(t2);
    int a = timecmp(t1, t2);
    printf("Time comparison function returns %d", a);
    return 0;
}
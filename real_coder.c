#include <stdio.h>
typedef struct timestamp
{
    int day;
    int month;
    int year;
    int hour;
    int minutes;
    int seconds;
} timestamp;

void display(timestamp t)
{
    printf("The time stamp is: %d/%d/%d - %dhrs %dmins %dsecs \n", t.day, t.month, t.year, t.hour, t.minutes, t.seconds);
}

int timestampcmp(timestamp t1, timestamp t2)
{
    if (t1.year > t2.year)
    {
        return 1;
    }
    if (t1.year < t2.year)
    {
        return -1;
    }
    if (t1.month > t2.month)
    {
        return 1;
    }
    if (t1.month < t2.month)
    {
        return -1;
    }
    if (t1.day > t2.day)
    {
        return 1;
    }
    if (t1.day < t2.day)
    {
        return -1;
    }
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
    timestamp t1 = {2, 11, 2020, 4, 12, 56};
    timestamp t2 = {3, 03, 2021, 12, 47, 02};
    display(t1);
    display(t2);
    int a = timestampcmp(t1, t2);
    printf("Time stamp comparison function returns %d", a);
    return 0;
}
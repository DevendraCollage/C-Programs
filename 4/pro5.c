/*
TODO : WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS [e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)]
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int sec, hour, minute, seconds;

    printf("Enter The Seconds Here : ");
    scanf("%d", &sec);

    minute = sec / 60;
    hour = minute / 60;
    seconds = sec % 60;
    minute = minute % 60;

    printf("%d:%d:%d", hour, minute, seconds);
}

/* Output
Enter The Seconds Here : 10000
2:46:40
*/
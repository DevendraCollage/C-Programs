/*
TODO : WAP to convert number of days into year, week & days [e.g. 375 days mean 1 year, 1 week and 3 days]
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int days, days1, year, weeks, remain_days;

    printf("Enter The Days Here : ");
    scanf("%d", &days);

    year = days / 365;
    days1 = days % 365;
    weeks = days1 / 7;
    remain_days = days - year * 365 - weeks * 7;

    printf("Year : %d\n", year);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d", remain_days);
}

/* Output
Enter The Days Here : 895
Year : 2
Weeks : 23
Days : 4
*/
/*
TODO : WAP to check whether the given year is leap year or not. [If a year can be divisible by 4 but not divisible by 100
then it is leap year but if it is divisible by 400 then it is leap year]
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int year;

    printf("Enter The Year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("The %d is Leap Year!", year);
    }
    else if (year % 100 == 0)
    {
        printf("The %d is Leap Year!", year);
    }
    else if (year % 400 != 0)
    {
        printf("The %d is Not Leap Year!", year);
    }
}

/* Output
Enter the Year : 2015
The 2015 is Not Leap Year!
*/
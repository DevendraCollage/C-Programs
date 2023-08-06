/*
TODO : WAP to find out largest number from given two numbers
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int num1, num2;

    printf("Enter Number 1 Here : ");
    scanf("%d", &num1);

    printf("Enter Number 2 Here : ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("The Number %d Is Greater Among Them!", num1);
    }
    if (num2 > num1)
    {
        printf("The Number %d Is Greater Among Them!", num2);
    }
}

/* Output
Enter Number 1 Here : 52
Enter Number 2 Here : 46
The Number 52 Is Greater Among Them!
*/
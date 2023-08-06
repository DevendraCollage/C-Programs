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
        printf("The %d is Greater Among Them!", num1);
    }
    else
    {
        printf("The %d is Greater Among Them!", num2);
    }
}

/* Output
Enter Number 1 Here : 54
Enter Number 2 Here : 97
The 97 Is Greater Among Them!
*/
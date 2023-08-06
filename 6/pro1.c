/*
TODO : WAP to check whether the given number is positive or negative
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int num;

    printf("Enter The Number Here : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The Entered Number %d is Positive!", num);
    }
    else
    {
        printf("The Entered Number %d is Negative!", num);
    }
}

/* Output
Enter The Number Here: -15
The Entered Number -15 is Negative!

Enter The Number Here : 15
The Entered Number 15 is Positive!
*/
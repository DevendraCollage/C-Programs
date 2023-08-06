/*
TODO : WAP to find out largest number from given three numbers without using Logical Operator (&&) Using Nested If
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int num1, num2, num3;

    printf("Enter Number 1 Here : ");
    scanf("%d", &num1);

    printf("Enter Number 2 Here : ");
    scanf("%d", &num2);

    printf("Enter Number 3 Here : ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The Number %d is Greater Among Them!", num1);
        }
        else
        {
            printf("The Number %d is Greater Among Them!", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("The Number %d is Greater Among Them!", num2);
        }
        else
        {
            printf("The Number %d is Greater Among Them!", num3);
        }
    }
}

/* Output
Enter Number 1 Here : 45
Enter Number 2 Here : 97
Enter Number 3 Here : 20
The Number 97 is Greater Among Them!
*/
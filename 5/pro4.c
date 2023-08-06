/*
TODO : WAP to find out largest number from given three numbers using Logical Operator (&&)
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int num1, num2, num3;

    printf("Enter The Number 1 Here : ");
    scanf("%d", &num1);

    printf("Enter The Number 2 Here : ");
    scanf("%d", &num2);

    printf("Enter The Number 3 Here : ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("The Number %d Is Greater Among Them!", num1);
    }
    if (num2 > num3)
    {
        printf("The Number %d Is Greater Among Them!", num2);
    }
    if (num3 > num1 && num3 > num2)
    {
        printf("The Number %d Is Greater Among Them!", num3);
    }
}
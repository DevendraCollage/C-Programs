/*
TODO : WAP to print addition of 2 numbers (with scanf)
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int num1, num2;

    printf("Enter The Number one : ");
    scanf("%d", &num1);

    printf("Enter The Number two : ");
    scanf("%d", &num2);

    printf("The Addition of %d + %d is = %d", num1, num2, num1 + num2);
}

/* Output
Enter the number One : 150
Enter the number Two : 50
The Addition of 150 + 50 is = 200
*/
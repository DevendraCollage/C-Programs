/*
TODO : WAP to calculate and print average of 2 numbers (with scanf)
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    float num1, num2;

    printf("Enter The Number one : ");
    scanf("%f", &num1);

    printf("Enter The Number two : ");
    scanf("%f", &num2);

    printf("The Average of %.2f and %.2f is = %.2f", num1, num2, (num1 + num2) / 2);
}

/* Output
Enter The Number one : 150
Enter The Number two : 24
The Average of 150.00 and 24.00 is = 87.00
*/
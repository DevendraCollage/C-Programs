/*
TODO : WAP to calculate Simple Interest
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    float p, n, r;

    printf("Enter The Principle Here : ");
    scanf("%f", &p);

    printf("Enter The Years Here : ");
    scanf("%f", &n);

    printf("Enter The Interest Rate Here : ");
    scanf("%f", &r);

    printf("Your Simple Interest Is : %.2f", (p * n * r) / 100);
}

/* Output
Enter The Principle Here : 1200
Enter The Years Here : 5
Enter The Interest Rate Here : 5
Your Simple Interest Is:  300.00
*/
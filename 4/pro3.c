/*
TODO : WAP to find out distance traveled by the equation d = ((u*t )+ ((a*t)*(a*t)))
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    float u, a, d;
    int t;

    printf("Enter The u here : ");
    scanf("%f", &u);

    printf("Enter The a here : ");
    scanf("%f", &a);

    printf("Enter The t here : ");
    scanf("%d", &t);

    d = ((u * t) + ((a * t) * (a * t)));

    printf("The Distance Traveled Is : %.2f", d);
}

/* Output
Enter the u here : 5
Enter the a here : 2
Enter the t here : 3
The Distance Traveled is : 51.00
*/
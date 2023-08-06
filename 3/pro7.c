/*
TODO : WAP to calculate Area of Circle
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
#define PI 3.14
void main()
{
    float radius;

    printf("Enter The Radius Of Circle : ");
    scanf("%f", &radius);

    printf("The Area of Circle is : %.2f", (PI * radius * radius));
}

/* Output
Enter the Radius Of Circle : 20
The Area of Circle is : 1256.64
*/
/*
TODO : WAP to calculate Area of Triangle (hint: a = h*b*0.5)
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    float height, base;

    printf("Enter Height Of Triangle Here : ");
    scanf("%f", &height);

    printf("Enter Base Of Triangle Here : ");
    scanf("%f", &base);

    printf("The Area of Triangle is : %.2f", height * base * 0.5);
}

/* Output
Enter Height Of Triangle Here : 25
Enter Base Of Triangle Here : 10
The Area of Triangle is : 125.00
*/
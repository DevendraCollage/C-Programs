/*
TODO : WAP to convert temperature from Fahrenheit to Celsius (Formula: c=(((f-32)*5))/9)
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    float fahrenheit, celsius;

    printf("Enter The Fahrenheit Here : ");
    scanf("%f", &fahrenheit);

    celsius = (((fahrenheit - 32) * 5) / 9);

    printf("The Fahrenheit Converted in Celsius : %.2f", celsius);
}

/* Output
Enter The Fahrenheit : 120
The Fahrenheit Converted in Celsius : 48.89
*/
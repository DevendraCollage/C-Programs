/*
TODO : WAP to convert temperature from Celsius to Fahrenheit
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    float celsius, fahrenheit;

    printf("Enter The Celsius Here : ");
    scanf("%f", &celsius);

    fahrenheit = (((celsius * 9) / 5) + 32);

    printf("The Celsius Converted into Fahrenheit : %.2f", fahrenheit);
}

/* Output
Enter The Celsius Here : 40
The Celsius Converted into Fahrenheit : 104
*/
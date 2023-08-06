/*
TODO : WAP to enter distance into kilometer and convert it into meter, feet, inches, and centimeter
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    float kilometer, meter, feet, inches, centimeter;

    printf("Enter The Kilometer Here : ");
    scanf("%f", &kilometer);

    meter = kilometer * 1000;
    feet = meter * 3.280;
    inches = feet * 12;
    centimeter = inches * 2.54;

    printf("The %.2f converted into Meter : %.2f\n", kilometer, meter);
    printf("The %.2f converted into Feet : %.2f\n", meter, feet);
    printf("The %.2f converted into Inches : %.2f\n", feet, inches);
    printf("The %.2f converted into Centimeter : %.2f", inches, centimeter);
}

/* Output
Enter The Kilometer Here : 12
The 12.00 converted into Meter : 12000.00
The 12000.00 converted into Feet : 39360.00
The 36360.00 converted into Inches : 472320.00
The 472320.00 converted into Centimeter : 1199692.75
*/
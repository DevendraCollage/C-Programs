/*
TODO : WAP to find percentage of 5 subjects
Date : 05/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    float sub1, sub2, sub3, sub4, sub5, per;

    printf("Enter The Sub1 Marks Here : ");
    scanf("%f", &sub1);

    printf("Enter The Sub2 Marks Here : ");
    scanf("%f", &sub2);

    printf("Enter The Sub3 Marks Here : ");
    scanf("%f", &sub3);

    printf("Enter The Sub4 Marks Here : ");
    scanf("%f", &sub4);

    printf("Enter The Sub5 Marks Here : ");
    scanf("%f", &sub5);

    per = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    printf("The Percentage of 5 Subjects is : %.2f", per);
}

/* Output
Enter The Sub1 Marks Here : 96
Enter The Sub2 Marks Here : 78
Enter The Sub3 Marks Here : 89
Enter The Sub4 Marks Here : 92
Enter The Sub5 Marks Here : 98
The Percentage of 5 Subjects is : 92.40
*/
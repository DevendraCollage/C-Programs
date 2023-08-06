/*
TODO : WAP to check whether the entered character is capital, small letter, digit or any special character.
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char ch;

    printf("Enter The Character Here : ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("This Is Capital Characters!");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("This Is Small Characters!");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("This Is Digit!");
    }
    else if (ch >= 32 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 126)
    {
        printf("This Is Special Characters!");
    }
}

/* Output
Enter The Character Here: @
This Is Special Characters!
*/
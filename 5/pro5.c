/*
TODO : WAP to perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int num1, num2, choice;

    printf("Enter The Number 1 Here : ");
    scanf("%d", &num1);

    printf("Enter The Number 2 Here : ");
    scanf("%d", &num2);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter The Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // Addition
        printf("The %d + %d = %d", num1, num2, num1 + num2);
    }
    if (choice == 2)
    {
        // Subtraction
        printf("The %d - %d = %d", num1, num2, num1 - num2);
    }
    if (choice == 3)
    {
        // Multiplication
        printf("The %d * %d = %d", num1, num2, num1 * num2);
    }
    if (choice == 4)
    {
        // Division
        printf("The %d / %d = %d", num1, num2, num1 / num2);
    }
    if (choice > 4)
    {
        printf("Enter The Right Choice!");
    }
}

/* Output
Enter The Number 1 Here : 50
Enter The Number 2 Here : 50
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter The Choice : 6
Enter The Right Choice!

Enter The Choice : 1
The 50 + 50 = 100
*/
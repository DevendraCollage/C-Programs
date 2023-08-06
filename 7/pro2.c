/*
TODO : WAP to find out the Maximum and Minimum number from given 10 numbers.
then it is leap year but if it is divisible by 400 then it is leap year]
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int a[10], max, min;
    for (int i = 0; i < 9; i++)
    {
        printf("Enter Ten Value Here : ");
        scanf("%d", &a[i]);
        if (i == 0)
        {
            min = max = a[i];
        }
        else if (min > a[i])
        {
            min = a[i];
        }
        else if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("The Minimum Number Is : %d\n", min);
    printf("The Maximum Number Is : %d", max);
}

/* Output
Enter Ten Value Here : 10
Enter Ten Value Here : 20
Enter Ten Value Here : 30
Enter Ten Value Here : 40
Enter Ten Value Here : 50
Enter Ten Value Here : 60
Enter Ten Value Here : 70
Enter Ten Value Here : 80
Enter Ten Value Here : 90
The Minimum Number Is : 10
The Maximum Number Is : 90
*/
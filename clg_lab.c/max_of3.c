
// “Write a C program to find the maximum of three numbers.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    printf("Enter the third number:");
    scanf("%d", &num3);
    if (num1 > num2)

    {
        if (num1 > num3)
        {
            printf("%d is maximum number", num1);
        }
        else
        {
            printf("%d is maximum number", num3);
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            printf("%d is maximum number", num2);
        }
        else
        {
            printf("%d is maximum number", num3);
        }
    }
    else
    {
        printf("All given number are same");
    }

    return 0;
}

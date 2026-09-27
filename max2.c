// “Write a C program to find the maximum of two numbers.”
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("%d is maximum number", num1);
    }
    else
        printf("%d is maximum number", num2);
    return 0;
}
// Write a C program to find the maximum of three numbers.
#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5;
    printf("Enter the values of five numbers:");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    if (num1 == num2 && num2 == num3 && num3 == num4 && num4 == num5)
    {
        printf("All given number are same");
    }
    else if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
    {
        printf("%d is maximum number", num1);
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
    {
        printf("%d is maximum number", num2);
    }
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5)
    {
        printf("%d is maximum number", num3);
    }
    else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5)
    {
        printf("%d is maximum number", num4);
    }
    else
    {
        printf("%d is maximum number", num5);
    }

    return 0;
}
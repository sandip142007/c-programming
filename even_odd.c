// Write a C program to check whether the input number is even or odd.”
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("given no is even");
    }
    else
    {
        printf("given no is odd");
    }
    return 0;
}
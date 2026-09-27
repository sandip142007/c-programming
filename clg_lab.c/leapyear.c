// “Given a four-digit number representing a year, write a C program to find out whether it is a leap year.”
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the year:");
    scanf("%d", &num);

    if (num % 400 == 0 || (num % 4 == 0 && num % 100 != 0))
    {
        printf("%d is a leap year", num);
    }
    else
    {
        printf("%d is not a leap year", num);
    }
    return 0;
}
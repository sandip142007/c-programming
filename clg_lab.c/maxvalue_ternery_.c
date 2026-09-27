#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number:\n");
    scanf("%d", &num1);

    printf("Enter the second number:\n");
    scanf("%d", &num2);

    int max = num1 > num2 ? num1 : num2;
    printf("the largest number is: %d", max);

    return 0;
}
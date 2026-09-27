#include <stdio.h>
int main()
{
    int a, b, add, sub, mul;
    float div;
    printf("Enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;

    printf("Addition of a and b is: %d\n", add);
    printf("Subtraction of a and b is: %d\n", sub);
    printf("Multiplication of and b is: %d\n", mul);
    printf("Division of a and b is: %f", div);
    return 0;
}
#include <stdio.h>
int main()
{
    float cel_1, cel_2, fer_1, fer_2;
    printf("Enter temperatur in celsius:\n");
    scanf("%f", &cel_1);
    fer_1 = (cel_1 * 9 / 5) + 32;
    printf("%.2f C = %.2f F\n", cel_1, fer_1);
    printf("Enter temperatur in fehrenheit:\n");
    scanf("%f", &fer_2);
    cel_2 = (fer_2 - 32) * 5 / 9;
    printf("%.2f F = %.2f C\n", fer_2, cel_2);
    return 0;
}
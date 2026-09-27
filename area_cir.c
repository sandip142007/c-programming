#include <stdio.h>
int main()
{
    float r, a, p;
    printf("enter the redius of the circule:");
    scanf("%f", &r);
    a = 3.14 * r * r;
    p = 2 * 3.14 * r;
    printf("Area of the circle is: %.2f\n", a);
    printf("perimeter ofthe circle is: %.2f", p);
    return 0;
}
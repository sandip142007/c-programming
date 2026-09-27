#include <stdio.h>
int main()
{
    float len, wid, a, p;
    printf("Enter the length of the rectangle:\n");
    scanf("%f", &len);
    printf("Enter the eidth of the rectangle:\n");
    scanf("%f", &wid);
    a = len * wid;
    p = 2 * (len + wid);
    printf("Area of the rectangle is: %.2f\n", a);
    printf("perimeter of the rectangle is: %.2f", p);
    return 0;
}
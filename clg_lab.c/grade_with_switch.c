#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5, total, ygpa;
    float avg;

    printf("Enter your marks(Bengali,English,Math,Physics,Chemistry):\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if (n1 > 100 || n2 > 100 || n3 > 100 || n4 > 100 || n5 > 100)
    {
        printf("Invalid number! Please enter yor valid number");
        return 0;
    }

    total = n1 + n2 + n3 + n4 + n5;
    avg = (float)total / 5;
    ygpa = avg / 10;

    printf("your total number is: %d\n", total);
    printf("Average: %.2f\n", avg);
    printf("YGPA: %d\n", ygpa);

    switch (ygpa)
    {
    case 10:
    case 9:
    {
        printf("grade: 'O'");
        break;
    }
    case 8:
    {
        printf("grade: 'E'");
        break;
    }
    case 7:
    {
        printf("grade: 'A'");
        break;
    }
    case 6:
    {
        printf("grade: 'B'");
        break;
    }
    case 5:
    case 4:
    {
        printf("grade: 'c'");
        break;
    }
    default:
        printf("fail!");
        break;
    }
    return 0;
}
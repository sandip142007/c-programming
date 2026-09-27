// Enter the marks of five subjects, calculate the total marks, and find out the grade of the student
#include <stdio.h>
int main()
{
    int mark1, mark2, mark3, mark4, mark5, total;
    float avg;
    printf("Enter your marks(bengali,english,mathematics,physics,chemistry):\n");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    avg = (float)total / 5;
    if (mark1 > 100 || mark2 > 100 || mark3 > 100 || mark4 > 100 || mark5 > 100)
    {
        printf("Invalid number!");
        return 0;
    }

    printf("Total marks is: %d\n", total);
    printf("Avarage marks is: %.2f\n", avg);

    if (avg >= 90)
    {
        printf("grade: O");
        }
    else if (avg >= 80)
    {
        printf("grade: A");
    }
    else if (avg >= 75)
    {
        printf("grade: B");
    }
    else if (avg >= 60)
    {
        printf("grade: C");
    }
    else if (avg >= 30)
    {
        printf("grade; D");
    }
    else
        printf("fail!");
    return 0;
}
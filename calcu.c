#include <stdio.h>
int main()
{
    float num1, num2;
    char op;
    int a = 0;
    printf("enter yor expretion\n");
    scanf("%f  %c  %f", &num1, &op, &num2);
    if (op == '+')
    {
        printf("result:%.7f", num1 + num2);
    }
    else if (op == '-')
    {
        printf("result:%.7f", num1 - num2);
    }
    else if (op == '*')
    {
        printf("result:%.7f", num1 * num2);
    }
    else if (op == '/')
    {
        if (num2 == a)
        {
            printf("resul is undifiend");
        }
        else
        {
            printf("result:%.7f", num1 / num2);
        }
    }
    else
    {
        printf("invalid oparetion");
    }
    return 0;
}

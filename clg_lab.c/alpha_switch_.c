#include <stdio.h>
int main()
{
    char ch;

    printf("Enter the charecter:\n");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {

        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'u':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        {
            printf("your charecter is vowel");
            break;
        }
        default:
        {
            printf("your charecter is consonant");
            break;
        }
        }
    }
    else
    {
        printf("Invalid input!");
    }
    return 0;
}
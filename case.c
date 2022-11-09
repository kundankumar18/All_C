#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Value is 7");
        break;

    case 2:
        printf("Value is 8");
        break;

    case 3:
        printf("Value is 9");
        break;

    default:
        printf("Out of range");
        break;
    }
    return 0;
}
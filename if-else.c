#include <stdio.h>

void main()
{
    int a;

    printf("Enter a number\n");
    scanf("%d", &a);

    // If else
    if (a <= 100)
    {

        // Nested if else
        if (a <= 30)
        {
            printf(" under 30");
        }
        else
        {
            printf("Not under 30");
        }
    }
    else
    {
        printf("Not under 100");
    }
}
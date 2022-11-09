
#include <stdio.h>

void main()
{
    int a, b, k;
    
    printf("enter a and b to calculate (a+b)^2 \n");
    scanf("%d %d", &a, &b);

    k = (a * a) + (b * b) + (2 * a * b);

    printf("answer is %d", k);
}
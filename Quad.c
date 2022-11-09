#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, d, e, f;

    printf("enter the a,b,c\n");
    scanf("%f %f %f ", &a, &b, &c);

    d = (b * b - 4 * a * c);

    if (d > 0)
    {

        e = (-b + sqrt(d)) / 2 * a;
        f = (-b - sqrt(d)) / 2 * a;
        printf("root are real = %f \n %f \n", e, f);
    }
    else
    {
        printf("roots are imaginary");
    }
}
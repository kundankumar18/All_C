#include<stdio.h>

void main ()
{
    int a ,b,t;
    printf("enter the value a,b \n");
    scanf("%d %d",&a,&b);

    t=a;
    a=b;
    b=t;
    printf("swapped no are a=%d,b=%d",a,b);



}
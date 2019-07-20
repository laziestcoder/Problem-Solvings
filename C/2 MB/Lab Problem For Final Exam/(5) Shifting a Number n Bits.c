/*Write a Program to show that shifting a number n-bits
is equivalent to divide it by 2^n*/
#include<stdio.h>
#include<math.h>
int main()
{
    int u=15,v=128,a,b;
    a=v>>3;
    b=v/pow(2,3);
    printf("%d %d\n",a,b);
    a=u<<3;
    b=u*pow(2,3);
    printf("%d %d",a,b);
    return 0;
}

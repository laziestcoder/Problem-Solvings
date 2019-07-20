/*
fibonacci number non recursive
*/

#include<stdio.h>

int main()
{
    double fib[101];
    int i;
    fib[1]=1;
    fib[2]=1;
    for(i=3;i<=100;i++)
        fib[i]=fib[i-1]+fib[i-2];
    printf("which fib number : ");
    scanf("%d",&i);
    printf("fib[%d] = %.0lf",i,fib[i]);
    return 0;
}

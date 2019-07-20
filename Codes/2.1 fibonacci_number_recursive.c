/*
fibonacci number recursive
*/

#include<stdio.h>

int fib(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    printf("which fib number : ");
    scanf("%d",&n);
    printf("fib[%d] = %d",n,fib(n));
    return 0;
}

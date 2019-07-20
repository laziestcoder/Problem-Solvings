#include<stdio.h>
int fib(int n)
{
    int val;
    if(n==1||n==2)
        val=1;
    else
        val=fib(n-1)+fib(n-2);
    return val;
}
int main()
{
    int data,x;
    scanf("%d",&x);
    data=fib(x);
    printf("%d",data);

    return 0;
}

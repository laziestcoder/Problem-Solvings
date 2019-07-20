/*Write a Program to find the Fibonacci series up to nth terms.
N will be given as input by the user.
Hint: Fibonacci series
1 1 2 3 5 8 13 21........
each term is formed by the addition of two previous terms.*/
#include<stdio.h>
int main()
{
    int fib[100],i,n;
    //Problem scanf("%d",&n);
    fib[1]=1;
    fib[2]=1;
    printf("11");
    for(i=3;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d",fib[i]);
    }
    return 0;
}

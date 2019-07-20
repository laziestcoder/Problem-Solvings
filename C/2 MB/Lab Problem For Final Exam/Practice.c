#include<stdio.h>
int main()
{
    int fib[100],i,n;
    scanf("%d",&n);
    if(n==1)
    {

        printf("1 ");
    }
    else if(n==2)
    {

        printf("1 1 ");
    }
    else
        printf("1 1 ");
    fib[1]=1;
    fib[2]=1;

    for(i=3;i<=n;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
            printf("%d ",fib[i]);
        }
    return 0;
}

#include<stdio.h>

int main()
{
    int a, b,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n==1)
            break;
        else if(n%2!=0)
            printf("%d",3*n+1);
        else
            printf("%d",n/2);
    }
    return 0;
}

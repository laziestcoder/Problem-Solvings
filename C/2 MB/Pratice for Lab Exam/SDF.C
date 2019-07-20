//Factorial Program
#include<stdio.h>
int main()
{
    int res=1,i,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        res=res*i;
    }
    printf("%d",res);
}

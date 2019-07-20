#include<stdio.h>
int main()
{
    int n,fac,factorial;
    scanf("%d",&n);
    if(n<=1)
        fac=1;
    else
        fac=(n*factorial(n-1));
    printf("%d",fac);
}

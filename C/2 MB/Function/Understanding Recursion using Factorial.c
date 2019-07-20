#include<stdio.h>
int factorial(int x)
{
    int val;
    if(x==1)
        val=1;
    else
        val=x*factorial(x-1);
    return val;
}
int main()
{
    int a,res;
    scanf("%d",&a);
    res=factorial(a);
    printf("%d",res);

    return 0;
}

#include<stdio.h>
int main()
{
    int n,res;
    scanf("%d",&n);
    res=fac(n);
    printf("%d",res);
    return 0;
}
int fac(a)
{
    int val;
    if(a==1)
        val=1;
    else
        a=a*fac(a-1);
    return a;
}


#include<stdio.h>
//#include<string.h>
int main()
{
    //freopen("input.txt","r",stdin);
    int a[101],t,T;
    scanf("%d",&t);
    for(T=1; T<=t; T++)
    {
        scanf(" %[^\n]",a);
        printf("Case %d: %s\n",T,strupr(a));

    }

    return 0;
}

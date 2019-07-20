#include<stdio.h>
int power(int x,int y)
{
    int i,res=1;
    for(i=1;i<=y;i++)
        res=res*x;
    return res;
}
int main()
{
    int a,b,d;
    scanf("%d%d",&a,&b);
    d=power(a,b);
    printf("%d",d);

    return 0;
}

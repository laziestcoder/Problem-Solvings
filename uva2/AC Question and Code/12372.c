#include<stdio.h>
int main ()
{
    int t,i,l,h,w;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&l,&w,&h);
        if(h<=20 && l<=20 && w<=20)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}

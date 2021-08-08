#include<stdio.h>
int main()
{
    int x,i,m[77],d[77],y,n,t=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&m[i],&d[i]);
    }
    t=m[1]*d[1];
    for(i=2; i<=n; i++)
    {
        if(d[i]<d[i+1])
        {
            d[i+1]=d[i];
        }
        t=t+(m[i]*d[i]);
    }
    printf("%d\n",t);
    return 0;
}

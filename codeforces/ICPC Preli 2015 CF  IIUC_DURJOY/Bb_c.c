#include<stdio.h>

int main ()
{
    int i,j,t,n,a,b,sum,size;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        size=0;
        sum=0;
        scanf("%d",&n);
        for(j=1; j<n ; j++)
        {
            scanf("%d%d",&a,&b);
            sum=sum+a-b;
            if(sum>size)
                size=sum;
        }
        printf("Case %d: %d\n",i,size);
    }
    return 0;
}

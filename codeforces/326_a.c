#include<stdio.h>

int main ()
{
    long long i,n,x;
    int q,a[100005],p[100005],A[100005];
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&a[i],&p[i]);

    }
    for(i=1; i<=n;i++)
    {
        if(i==1)
         {
             A[i]=a[i]*p[i];
             x=1;
         }
        else if(p[x]<=p[i])
         {
             A[i]=a[i]*p[x];
         }
         else
         {
             A[i]=a[i]*p[i];
             x=i;
         }
    }
    q=0;
    for(i=1; i<=n; i++)
    {
        q=q+A[i];
    }
    printf("%d\n",q);
    return 0;
}

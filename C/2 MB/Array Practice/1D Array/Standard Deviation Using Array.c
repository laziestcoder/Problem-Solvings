#include<stdio.h>
int main()
{
    float sum=0,m,abc=0,var,sd;
    int x[10000],n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
        scanf("%d",&x[i]);
    for(i=1;i<=n;i++)
        sum=sum+x[i];

    m=sum/n;
    for(i=1;i<=n;i++)
        abc=abc+(x[i]-m)*(x[i]-m);
    var=abc/n;
    sd=sqrt(var);

    printf("%f",sd);

    return 0;
}

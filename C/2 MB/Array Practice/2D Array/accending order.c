#include<stdio.h>
int main()
{
    int tc,i,j,a[100],n,k,temp,l;
    scanf("%d",&tc);
    scanf("%d",&n);
    for(i=1;i<=tc;i++)
    {

        for(k=1;k<=n;k++)
            scanf("%d",&a[k]);

        for(k=1;k<=n;k++)
        {
            for(j=1;j<=n-k;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
            }
        }

        printf("Case %d: ",i);
        for(k=1;k<=n;k++)
            printf("%d ",a[k]);
            printf("\n");
    }
    return 0;
}

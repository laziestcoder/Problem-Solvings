//ACM 488
#include<stdio.h>
int main()
{
    int i,j,k,l,t,n,o;
    //freopen("e:\\488.in","r",stdin);
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        scanf("%d",&n);
        scanf("%d",&o);

        for(k=1;k<=o;k++)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
                for(i=n-1;i>=1;i--)
                {
                    for(j=1;j<=i;j++)
                        printf("%d",i);
                    printf("\n");
                }
                printf("\n");
        }
    }
    return 0;
}

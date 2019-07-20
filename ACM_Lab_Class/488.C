#include<stdio.h>
int main()
{
    int i,n,c,f,j,t,k;
   // freopen("e:\\488.in","r",stdin);
    scanf("%d",&t);

    for(k=1;k<=t;k++)
    {

        scanf("%d", &n);
        scanf("%d", &f);


        for(j=1;j<=f;j++)
        {

            for(i=1;i<=n;i++)
            {
                for(c=1;c<=i;c++)
                    printf("%d",i);
                printf("\n");
            }
            for(i=n-1;i>=1;i--)
            {
                for(c=1;c<=i;c++)
                    printf("%d",i);
                printf("\n");
            }
            printf("\n");

        }
       // if(k<f)
       // printf("\n");
    }



    return 0;
}

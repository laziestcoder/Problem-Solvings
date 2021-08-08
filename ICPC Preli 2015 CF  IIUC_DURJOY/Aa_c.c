#include<stdio.h>
int main ()
{
    int n,t,i,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        if(n>=0)
        {
            for(j=0; j<=n; j++)
            {
                printf("%d",j);
                if(j<n)
                    printf(" ");
            }

        }
        else if(n<0)
        {
            for(j=0; j>=n; j--)
            {
                printf("%d",j);
                if(j<n)
                    printf(" ");
            }
        }
        if(i<t)
            printf("\n");
    }
    return 0;
}

// Accepted, Cpbook 28
#include<stdio.h>

int main()
{
    int a,b,i,j,tc;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: ",i);
        for(j=1;j<=b;j++)
        {
            if(j%a==0)
                printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}

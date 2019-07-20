// Cpbook 28
#include<stdio.h>

int main()
{
    int a,b,i,j,tc,res;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: ",i);
        for(j=1;j<=b;j++)
        {
            res = a * j;
            if(res<=b)
                printf("%d ",res);
        }
        printf("\n");
    }

    return 0;
}

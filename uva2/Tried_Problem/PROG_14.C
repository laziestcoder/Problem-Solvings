//  Accepted
//  Subeen 29
//  1 4
//  1
//  11
//  111
//  1111
#include<stdio.h>
int main()
{
    int m,n,i,j,k,tc;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d%d",&m,&n);
        printf("Case %d:\n",i);
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=j;k++)
                printf("%d",m);
            printf("\n");
        }
    }
    return 0;
}


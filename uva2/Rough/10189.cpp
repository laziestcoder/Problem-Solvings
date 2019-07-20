#include<stdio.h>
int main()
{
    int i,j,m,n,f=0;
    int x[150][150];
    char a[150][150];
    int c=1;
    while((scanf("%d%d",&m,&n))!=EOF)
    {
        if(m==0 && n==0)
            break;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf(" %c",&a[i][j]);
            }
        }
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                x[i][j]=0;
            }
        }
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(a[i][j]=='*')
                {
                    x[i][j+1]++;
                    x[i][j-1]++;
                    x[i+1][j-1]++;
                    x[i+1][j]++;
                    x[i+1][j+1]++;
                    x[i-1][j-1]++;
                    x[i-1][j]++;
                    x[i-1][j+1]++;
                }
            }
        }
        if(f==1)
            printf("\n");
        f=1;
        printf("Field #%d:\n",c);
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(a[i][j]=='*')
                {
                    printf("*");
                }
                else
                {
                    printf("%d",x[i][j]);
                }
            }
            printf("\n");
        }
        c++;

    }
    return 0;
}

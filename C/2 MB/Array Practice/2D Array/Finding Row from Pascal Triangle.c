#include<stdio.h>
int main()
{
    int a[100][100],n,i,j;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}

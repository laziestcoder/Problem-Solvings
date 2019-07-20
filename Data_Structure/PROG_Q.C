#include<stdio.h>

int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j||i==0||j==2)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

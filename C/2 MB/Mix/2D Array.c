#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,sum2=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        {
            sum=sum+a[i];
            printf("%d",sum);
            printf("\n");
        }
            for(j=0;j<3;j++)
            {
                sum2=sum2+a[j];
                printf("%d",sum2);
                printf("\n");
            }

        //}
    return 0;
}

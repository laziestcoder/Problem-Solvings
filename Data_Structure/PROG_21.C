// Matrix Multiplication
// Input: 123456123456
// Output: 22 28 49 64
#include<stdio.h>

int main()
{
    int a[2][3],b[3][2],y[2][2],i,j,k;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            y[i][j]=0;
            for(k=0;k<3;k++)
                y[i][j]+=a[i][k]*b[k][j];
        }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\n",y[i][j]);
    }
    return 0;
}

//making elements zero on the rows
#include<stdio.h>
int main()
{
    float a[4][4],c[3];
    int i,j,k,s=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%f",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        c[i]=a[i+1][0]/a[0][0];
        for(j=0;j<4;j++)
        {
            a[i+1][j]-=c[i]*a[0][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%f ",a[i][j]);
        printf("\n");
    }
}

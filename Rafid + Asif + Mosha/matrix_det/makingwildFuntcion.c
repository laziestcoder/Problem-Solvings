//trying to make elements of lower triangle of matrix zero
//making function to calculate
//incomplete
#include<stdio.h>
int count=0,dt=1;
float red(float a[4][4])
{
    float c[3],d[3];
    int i,j;
    dt*=a[0][0];
    for(i=0;i<(3-count);i++)
    {
        c[i]=a[i+1][0]/a[0][0];
        for(j=0;j<(4-count);j++)
        {
            a[i+1][j]-=c[i]*a[0][j];
        }
        for(j=0;j<(3-count);j++)
        {
            a[i][j]=a[i+1][j+1];
        }
    }

    if(count!=3)
        d[count]=red(a[4-count][4-count]);
    else
        return dt;
    count++;
    return dt;
}
int main()
{
    float a[4][4],d;
    int i,j,k,s=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%f",&a[i][j]);
    }
    d=det(a);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%f ",a[i][j]);
        printf("\n");
    }
}

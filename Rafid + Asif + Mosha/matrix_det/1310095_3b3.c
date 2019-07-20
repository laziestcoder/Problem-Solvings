#include<stdio.h>
int det(int a[3][3])
{
    int i,j,m=0,n=0;
    for(i=0,j=2;i<3,j>=0;i++,j--)
    {
        m+=a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3];
        n-=a[0][j]*a[1][(j-1+3)%3]*a[2][(j-2+3)%3];
    }
    return (m+n);
}

int main()
{
    int a[3][3],i,j,p;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    p=det(a);
    printf("Det of 3*3 is : %d",p);
}

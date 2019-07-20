//4*4 matrix solve
//tried to solve it making a whole column zero
//by dividing fixed row with the row i'm changing and multiplying fixed to subtract from changing row
#include<stdio.h>
float det(float a[3][3])
{
    int i,j;
    float m=0,n=0;
    for(i=0,j=2;i<3,j>=0;i++,j--)
    {
        m+=a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3];
        n-=a[0][j]*a[1][(j-1+3)%3]*a[2][(j-2+3)%3];
    }
    return (m+n);
}
int main()
{
    float c[3],a[4][4],b[3][3],d=0,m=1,n,s=1;
    int i,j,l=0,k=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%f",&a[i][j]);
    }
    if(a[0][0]==0)
    {
        for(i=0;i<4;i++)
        {
            for(j=1;j<4;j++)
            {
                if(a[i][j]==0)
                    m++;
                else
                    s=(m)*(-1);
            }
        }
        for(i=m;i>0;i--)
        {
            for(j=0;j<4;j++)
            {
                n=a[j][i];
                a[j][i]=a[j][i-1];
                a[j][i-1]=n;
            }
        } //these loops is to change whole column to make sure a00 element is non zero
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
        {
            if((i==0)||(j==0))
                continue;
            else
            {
                b[k][l]=a[i][j];
                l++;
                if(l==3)
                {
                    k++;
                    if(k==3)
                        k=0;
                    l=0;
                }
            }
        }
    }
    d=s*a[0][0]*det(b);
    printf("\ndet is : %g\n",d);
}

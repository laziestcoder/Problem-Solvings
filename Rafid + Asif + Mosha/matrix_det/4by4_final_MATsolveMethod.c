//4*4 matrix solve
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
    int a[4][4],b[3][3],i,j,k=0,l=0,m,n,d=0,s=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
    for(m=0,n=0;m<4,n<4;n++)
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if((i==m)||(j==n))
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
        if((m+n)%2==0)
            s=1;
        else
            s=-1;
        d+=s*a[m][n]*det(b);
    }
    printf("\ndet is : %d\n",d);
}

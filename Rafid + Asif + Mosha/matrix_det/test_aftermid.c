#include<stdio.h>
float det(float a[3][3])
{
    int i,j,m,n;
    for(i=0,j=2;i<3,j>=0;i++,j--)
    {
        m+=a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3];
        n-=a[0][j]*a[1][(j-1+3)%3]*a[2][(j-2+3)%3];
        //n-=a[0][j]*a[1][(j-1)%3]*a[2][(j-2)%3];
    //printf("%d\t%d\n",a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3],a[0][j]*a[1][(j-1+3)%3]*a[2][(j-2+3)%3]);
    }
    return m+n;
}
int main()
{
    int a[4][4],b[3][3],i,j,k=0,l=0,m,n,d=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
    //in following loop i've to use i+j odd -1 bla bla, and co-effs'
    //now i'm trying to make the determinant matrix -yet to solve
    for(m=0,n=0;m<4,n<4;n++)
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if((i==m)||(j==n)) continue;
                else
                {
                    b[k][l]=a[i][j];
                    l++;
                    printf("m = %d i = %d j = %d\n",m,i,j);
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
        //d+=det(b[3][3]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
}

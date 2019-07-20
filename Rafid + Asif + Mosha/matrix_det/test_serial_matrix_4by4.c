#include<stdio.h>
//4*4 matrix solve
int det(int a[3][3])
{
    int i,j,m=0,n=0,z;
                            /*for(i=0;i<3;i++)
                            {
                                for(j=0;j<3;j++)
                                    printf("%d ",a[i][j]);
                                printf("\n");
                            }*/
    for(i=0,j=2;i<3,j>=0;i++,j--)
    {
        m+=a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3];
        n-=a[0][j]*a[1][(j-1+3)%3]*a[2][(j-2+3)%3];
                            //n-=a[0][j]*a[1][(j-1)%3]*a[2][(j-2)%3];
                            //printf("%d\t%d\n",a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3],a[0][j]*a[1][(j-1+3)%3]*a[2][(j-2+3)%3]);
    }
    z=m+n;
                            //printf("z is : \n%d\n",z);
    return (z);
}
int main()
{
    int a[4][4],b[3][3],i,j,k=0,l=0,m,n,d=0,s=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
    //in following loop i've to use i+j odd -1 bla bla, and co-effs'
    //now i'm trying to make the determinant matrix
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
                            //printf("m = %d i = %d j = %d\n",m,i,j);
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
                            /*for(i=0;i<3;i++)
                            {
                                for(j=0;j<3;j++)
                                    printf("%d ",b[i][j]);
                                printf("\n");
                            }
                            printf("\n%d\n",s*a[m][n]);*/
        d+=s*a[m][n]*det(b);
                            //printf("d is %d",d);
    }
    printf("\ndet is : %d\n",d);
}

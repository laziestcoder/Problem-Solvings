//i was given this 4*4 matrix to solve as assignment by sir
#include<stdio.h>
#include<math.h>
float det(float a[3][3])
{
    int i,j;
    float m=0,n=0;
    for(i=0,j=2;i<3,j>=0;i++,j--)
    { //solving 3*3 matrix by extended diagonal method(utd right positive, utd left negative)
        m+=a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3];
        n-=a[0][j]*a[1][(j-1+3)%3]*a[2][(j-2+3)%3];
    }
    return (m+n);
} //making most of the elements of a column or row zero will reduce calling det function
int main()
{
    float c[3],a[4][4],b[3][3],d=0,m=1,n,s=1;
    int i,j,l=0,k=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%f",&a[i][j]);
    }
//following condition and loops are to change whole column to make sure a00 element is non zero
    if(a[0][0]==0)
    {
        for(i=0;i<4;i++)
        {
            for(j=1;j<4;j++)
            {
                if(a[i][j]==0)
                    m++;
                else
                    s=pow(-1,m);
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
        }
    }
//a00 is fixed, making other elements of 1st column zero
    for(i=0;i<3;i++)
    {
        c[i]=a[i+1][0]/a[0][0];
//c[i] will be multiplied with first row elements to subtract from row i+1 corresponding elements in order to make 1st element of row i+1 zero
        for(j=0;j<4;j++)
        {
            a[i+1][j]-=c[i]*a[0][j];
        }
    }
//to find the co-factor matrix of a00
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
                    l=0;
                }
            }
        }
    }
    d=s*a[0][0]*det(b);
    printf("\ndet is : %g\n",d);
}

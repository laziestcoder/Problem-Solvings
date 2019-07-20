#include<stdio.h>
int main()
{
    float res2=0,res=1;
    int i,j;
    for(j=1;j<=n;j++)
    {
        for(i=j;i>=1;i++)
        {
            res=res*i;
        }
        res=res2+(1/res);
    }
}

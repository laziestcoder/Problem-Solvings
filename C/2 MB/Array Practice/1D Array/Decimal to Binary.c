#include<stdio.h>
int main()
{
    int x,d,r,i,b[100],indx=0;
    scanf("%d",&x);
    while(x!=0)
    {
        d=x/2;
        r=x%2;
        indx++;

        b[indx]=r;
        x=d;
    }
    for(i=indx;i>=1;i--)
        printf("%d",b[i]);

    return 0;
}

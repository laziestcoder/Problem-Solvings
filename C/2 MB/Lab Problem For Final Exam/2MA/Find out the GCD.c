#include<stdio.h>
int main()
{
    int a,b,d,r;
    scanf("%d%d",&a,&b);
    while(1)
    {
        d=a/b;
        r=a%b;
        if(r==0)
            break;
        else
        {
            a=b;
            b=r;
        }
    }
    printf("%d",b);
    return 0;
}

#include<stdio.h>
int large(int a,int b,int c)
{
    if(a>b&&a>c)
        return a;
    if(b>a&&b>c)
        return b;
    if(c>a&&c>b)
        return c;
}
int main()
{
    int x,y,z,max;
    scanf("%d%d%d",&x,&y,&z);
    max=large(x,y,z);
    printf("%d",max);

    return 0;
}

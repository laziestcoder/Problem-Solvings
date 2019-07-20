#include<stdio.h>
void large(int a,int b,int c)
{
    if(a>b&&a<c)
        printf("%d",a);
    if(b>a&&b>c)
        printf("%d",b);
    if(c>a&&c>b)
        printf("%d",c);
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    large(x,y,z);

    return 0;
}

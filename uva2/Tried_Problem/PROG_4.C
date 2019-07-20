#include<stdio.h>
int main()
{
    int tc,k,a,b,c;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a<c||a>c&&a<b)
            printf("Case %d: %d\n",k,a);
        if(b>c&&b<a||b>a&&b<c)
            printf("Case %d: %d\n",k,b);
        if(c>a&&c<b||c>b&&c<a)
            printf("Case %d: %d\n",k,c);
    }
    return 0;
}

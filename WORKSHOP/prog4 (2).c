#include<stdio.h>

int main()
{
    int tc, k, x;
    /*freopen("input4.txt","r",stdin);
    freopen("output4.txt","w",stdout);*/
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        scanf("%d",&x);
        if(x%2==0)
            printf("Case %d: even\n",k);
        else
            printf("Case %d: odd\n",k);
    }
    return 0;
}

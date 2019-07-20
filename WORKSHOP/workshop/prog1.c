#include<stdio.h>

int main()
{
    int tc, k, x;
    /*freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);*/
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        scanf("%d",&x);
        if(x%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}

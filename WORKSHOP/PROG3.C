#include<stdio.h>

int main()
{
    int x;
    /*freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);*/
    while(scanf("%d",&x)==1)
    {
        if(x%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}

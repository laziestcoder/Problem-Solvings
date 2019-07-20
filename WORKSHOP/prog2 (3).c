#include<stdio.h>

int main()
{
    int x;
    /*freopen("input2.txt","r",stdin);
    freopen("output2.txt","w",stdout);*/
    while(1)
    {
        scanf("%d",&x);
        if(x==-1)
            break;
        if(x%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}

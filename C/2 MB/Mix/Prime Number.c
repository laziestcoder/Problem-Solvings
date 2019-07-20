//Problem
#include<stdio.h>
int main()
{
    int x,j;
    printf("2\n");

    for(x=3;x<=300;x++)
    {
        if(x%2==0)
            continue;
        for(j=2;j<x;j++)
            if(x%j==0)
                break;
        if(j%2==1)
            printf("%d\n",x);
    }
    return 0;
}

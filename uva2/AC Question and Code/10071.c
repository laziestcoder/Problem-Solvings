#include<stdio.h>
int main ()
{
    int v,t;
    while ((scanf("%d%d",&v,&t))!=EOF)
    {
        if (v>=-100 && v<=100 && t>=0 && t<=200 )
            printf("%d\n",v*t*2);

    }
    return 0;
}

#include<stdio.h>

int main()
{
    int i,j,a,b;

    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
    return 0;
}
/*1000 - Greetings from LightOJ */

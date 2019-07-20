#include<stdio.h>
int main()
{
    long int a,b,c;

    while(scanf("%ld%ld%ld",&a,&b,&c) && a!=0 && b!=0 && c!=0 )
    {
        c=c*c;
        a=(a*a)+(b*b);
        if(c==a)
            printf("right\n");
        else
            printf("wrong\n");

    }
    return 0;
}

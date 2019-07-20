#include<stdio.h>
int main ()
{
    long long int a,b,x;
    while((scanf("%lld%lld",&a,&b))!=EOF)
    {
        if(a!=b && a<b)
            {x=b-a;
            printf("%lld\n",x);
            }
        else if(a!=b && a>b)
            {
                x=a-b;
        printf("%lld\n",x);}

    }
    return 0;
}

#include<stdio.h>
#include<math.h>

int main ()
{
    long long int n,x;
    while(scanf("%lld",&n)!=EOF)
    {
    x=pow(10,n);
    printf("x=pow(10,n)\n x=%lld\n n=%lld",x,n);
    }
    return 0;

}

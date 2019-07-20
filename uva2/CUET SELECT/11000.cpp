#include<stdio.h>
int main()
{
long long int n,i,sum[100000],fib[100000];
while(scanf("%lld",&n)==1 && n>=0)
{
fib[0]=0;
fib[1]=1;
sum[0]=1;
for(i=2;i<=n+1;i++)
    fib[i]=fib[i-1]+fib[i-2];
for(i=1;i<=n;i++)
    sum[i]=sum[i-1]+fib[i+1];
printf("%lld %lld\n",sum[n]-fib[i],sum[n]);
}
return 0;
}

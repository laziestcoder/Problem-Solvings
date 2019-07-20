/**
    Team    : IIUC Debug & Conquer
**/
#include<bits/stdc++.h>
using namespace std;

#define PI acos(0)
#define inf 100000000
#define EPS 1e-9
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define mod 10000007


long long int fn(long long int n)
{
    long long int b=1, a=0,j;
    if(n==0)
        return 0;
    if(n==1)
        return 1;

            //return ((n%mod)+(fn(n-1)*7)%mod);
}

int main()
{
    int t,i;
    long long int n;
    scanf("%d", &t);
    for(i=1; i<=t ; i++)
    {
        scanf("%lld",&n);
        printf("Case %d: %lld\n",i,fn(n));
    }
    return 0;
}


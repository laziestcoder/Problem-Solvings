#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        long long int x,n,a,k;
        double d;
        scanf("%lld",&x);
        d=x/180.0;
        n=x/180;
        if( x < 180 )
            printf("Case %lld: Impossible\n",i);
        else
        {
            n=n+2;
            d=(1.0*x)/n;
            a=x/n;
            if( d - a > 0.5 )
                printf("Case %lld: %lld %lld\n",i,n,a = a+1);
            else
                printf("Case %lld: %lld %lld\n",i,n,a);

        }
    }
    return 0;
}

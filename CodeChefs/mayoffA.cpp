#include<bits/stdc++.h>
using namespace std;
int main ()
{
        long long int n,t,sum=0,a,ans=0 ;
        scanf("%lld",&t);
        n=t;
        while(t--)
        {
            scanf("%lld",&a);
            sum+=a;
            ans+=(sum/2);
            sum%=2;
        }
        a=max(ans+sum,n);
        printf("%lld\n",a);
    return 0;
}

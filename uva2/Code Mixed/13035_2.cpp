#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main ()
{
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long x1,x2,x3,t,i,n,ans;
    cin >> t;
    for(i=1; i<=20; i++)
    {
        cin >> n;

        x1=n%3;
        x2=(n+1)%3;
        x3=(n+2)%3;
        n%=mod;
        ans=0;
        if(x1==0)
            ans=((n/3)%mod)*(((n+1)%mod)*((n+2)%mod))%mod;

        else if(x2==0)
            ans=(((n+1)/3)%mod)*(((n)%mod)*((n+2)%mod))%mod;

        else if(x3==0)
            ans=(((n+2)/3)%mod)*(((n+1)%mod) *(n%mod))%mod;

        cout << "Case " << i << ": " << ans%mod << endl;
    }
    return 0;
}


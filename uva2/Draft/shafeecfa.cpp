#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x=0,y=0,n,a,b,c;
    cin>>n>>a>>b>>c;
    long long m=n;
    while(n!=0)
    {
        n=n+c;
        long long nn=n/b;
        n=n%b;
        x=x+nn;
    }
    while(m>=a)
    {
        y=m/a;
        m=m%a;
    }
    long long ans;
    ans=max(x,y);
    cout<<ans<<"\n";
    return 0;
}

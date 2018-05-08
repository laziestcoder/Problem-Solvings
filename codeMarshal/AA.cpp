#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int t,cas,N,len, ans;
    cin>>t;
    for(cas=1; cas<=t; cas++)
    {
        scanf("%lld %lld",&len,&N);
        ans=len-N-1;
        printf("Case %lld: %lld\n",cas, ans);
    }
    return 0;
}

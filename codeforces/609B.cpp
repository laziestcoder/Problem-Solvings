#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main ()
{
    ll n,k,i;
    cin>>n>>k;
    ll a[n],sum = 0, del = 0, cnt = 0;
    map < ll, ll > mp;
    for(i = 0; i< n ; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    map <ll,ll> :: iterator p=mp.begin();
    i=1;
    sum=n;
    while(i<k)
    {
        del+=p->second;
        //cout<<"genre: "<<p->first<<" has: "<<p->second<<" books. delete: "<<del<<" "<<sum<<endl;

        cnt+=(sum-del)*p->second;
        p++;
        i++;
    }

    cout<<cnt;
    return 0;
}

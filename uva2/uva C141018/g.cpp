#include <bits/stdc++.h>
using namespace std;
bool comp( pair< int, long long int> a,pair< int, long long int> b )
{
    return a.first > b.first;
}
int main()
{
    //freopen("in.txt","r",stdin);
    int t,n,p;
    long long int ans, k, m;
    vector<pair< int, long long int> > v;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin >> k >> p;
            v.push_back(make_pair(p,k));
        }
        sort(v.begin(), v.end(), comp);
        m = v[0].second;
        ans = m*v[0].first;
        for( int i = 1; i < n; i++ )
        {
            m += v[i].second;
            ans = max(ans,m*v[i].first);
        }
        printf("Case %d: %lld\n", i, ans);
        v.clear();
    }

    return 0;
}


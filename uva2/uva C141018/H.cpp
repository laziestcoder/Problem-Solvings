#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in1.txt","r",stdin);
    int t, n, m;
    vector<int> v;
    long long int ans;

    cin >> t;
    for( int cn = 1; cn <= t; cn++ )
    {
        cin >> n;
        for( int i = 0; i < n; i++ )
        {
            cin >> m;
            //if( m != 0 )
                v.push_back(m);
        }
        sort(v.begin(), v.end());
        ans = 1;
        for( int i = 0; i < v.size(); i++ )
        {
            ans = (ans*(v[i]-i))% 1000000007;
        }
        printf("Case %d: %lld\n", cn, ans);
        v.clear();
    }
}

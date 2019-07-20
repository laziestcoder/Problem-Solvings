#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    for( int cn = 1; cn <= t; cn++ )
    {
        cin >> s;
        int i = 0;
        while( s[i] == '0' ) i++;
        s = s.substr(i);
        int l = s.length();
        bool f = 0;
        for( int i = 2; i <= l; i++ )
        {
            if( l%i == 0 )
            {
                int m = l/i;
                bool ff = 1;
                string s1 = s.substr(0, m);
                for( int j = m; j < l; j += m )
                {
                    if( s1 != s.substr(j, m) || s[j] == '0' )
                    {
                        ff = 0;
                        break;
                    }
                }
                f |= ff;
                cout<<f;
            }
        }
        if(f) printf("Case %d: YES\n", cn);
        else printf("Case %d: NO\n", cn);
    }
}

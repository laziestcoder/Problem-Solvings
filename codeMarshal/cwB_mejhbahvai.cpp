//D
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a[10], b[10], x;

    while(cin >> n >> m)
    {
        if( n == 0 && m == 0 ) return 0;
        for( int i = 0; i < 10; i++ ) a[i] = b[i] = 0;
        while(n--)
        {
            cin >> x;
            while(x) a[x--]++;
        }
        while(m--)
        {
            cin >> x;
            while(x) b[x--]++;
        }
        a[2] += 2*a[4] + a[6] + 3*a[8];
        a[3] += a[6] + 2*a[9];
        b[2] += 2*b[4] + b[6] + 3*b[8];
        b[3] += b[6] + 2*b[9];

        if( a[2] == b[2] && a[3] == b[3] && a[5] == b[5] && a[7] == b[7] ) puts("YES");
        else puts("NO");
    }
}


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b;
    c = a + b;
    if( c < 0 ) c = -c;
    c %= n;
    if( b < 0 && -b >= a ) c = n-c;
    if(c==0) c = n;
    cout << c;
}

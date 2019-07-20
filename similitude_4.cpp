/*
TASK:
ALGO:
LANG: C++
USER: smilitude1
*/

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

#define REP(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define FORD(i,a,b) for(__typeof(a) i=(a); i>=(b); i--)
#define SET(t,v) memset((t), (v), sizeof(t))
#define sz size()
#define pb push_back
#define i64 long long
#define ALL(x) x.begin(), x.end()

#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)
#define REV(x) reverse( ALL( x ) )

#define IO freopen("","r",stdin); freopen("","w",stdout);
#define bug(x) cerr << __LINE__ <<" "<< #x " = " << x << endl

/*
1  2   3  4  5  6  7  8  9 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
*/
void sieve() {
    int p[1000] = {0};
    for(int i=2; i<=100; i++) {
        if( p[i] ) continue;
        cout << i << endl;
        for(int j=i+i; j<=1000; j+=i) p[j] = 1;
    }
}



int main() {

    sieve();

	int n; cin>> n;

	return 0;
}

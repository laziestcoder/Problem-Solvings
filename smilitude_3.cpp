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

#define REP(i,n) for(i=0; i<(n); i++)
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

int ans[100];

int factorial( int n ) {
    if( ans[ n ] != 0 ) return ans[n];

    if( n == 0 ) return 1;
    else return ans[n] = n * factorial( n-1 );
}

int fibo( int n ) {
    if( ans[n] != 0 ) return ans[n];
    if( n == 0 || n == 1 ) return 1;
    else return ans[n] = fibo(n-2) + fibo(n-1);
}

// __gcd( a, b );

int gcd( int a, int b ) {
    if( b == 0 ) return a;
    else gcd( b, a % b );
}

int lcm( int a, int b ) {
    return (a*b) / gcd( a,b );
}

// to carry or not to carry
void carry() {
    unsigned int a, b;
    while( cin >> a >> b ) {
        cout << a ^ b << endl;
    }
}

void addsum () {
    int n, a[14];
    // input routine
    int twopower = 1<<n;
 //   for(int i=1; i<=n; i++) twopower = 2*twopower;
    for(int mask = 0; mask < twopower ;  mask ++ ) {
        int sum = 0;
        for(int i=0; i<n; i++) if( mask & (1<<i) ) sum += a[i];

    }
}

int power_m( int a , int n ) {
    if( n == 1 ) return a;
    int half = power_m( a, n/2 );
    half *= half;
    half %= mod;
    if( n % 2 == 1 ) half *= a;
    half %= mod;
    return half;
}

void bitthings() {
     // checking if a bit is on
     if( mask & (1<<i) );
     // checking if its off
     if( !( mask & (1<<i));
     // turning it on
     mask |= ( 1<< i ); // mask = mask | (1<<i)
     // turning it off
     mask &= ~( 1 << i );
 }


int main() {
//	int i,j;
//	REP(i,100)

    int n;
    while( cin >> n ) {
        cout << fibo( n ) << endl;
    }

	return 0;
}

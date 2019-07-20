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

char g[10][10];
int dist[10][10];
int nrow, ncol;

int dr[] = { 1, -1, 0, 0 };
int dc[] = { 0, 0, 1, -1 };

int valid( int r, int c ) {
    if( r < 0 || c < 0 || r >= nrow || c >= ncol || g[r][c] == '*' ) return 0;
    return 1;
}

int main() {

		int i, j;

	// input
/*
    3 4
	...E
	S**.
	....
*/

	scanf("%d %d",&nrow, &ncol);
	for(i=0; i<nrow; i++) scanf("%s", g[i] );

	for(i=0; i<nrow; i++)
	for(j=0; j<ncol; j++) dist[i][j] = 1000;

    queue< int > q;
    q.push( 1 ); q.push( 0 );
    dist[1][0] = 0;


    // detailed one
    while( !q.empty() ) {
        int r = q.front(); q.pop();
        int c = q.front(); q.pop();

        if( valid( r+1, c ) ) if( dist[r+1][c] > dist[r][c]+1 ) {
            dist[r+1][c] = dist[r][c]+1;
            q.push( r+1 ); q.push( c );
        }


        if( valid( r-1, c ) ) if( dist[r-1][c] > dist[r][c]+1 ) {
            dist[r-1][c] = dist[r][c]+1;
            q.push( r-1 ); q.push( c );
        }


        if( valid( r, c+1 ) ) if( dist[r][c+1] > dist[r][c]+1 ) {
            dist[r][c+1] = dist[r][c]+1;
            q.push( r ); q.push( c+1 );
        }

        if( valid( r, c-1 ) ) if( dist[r][c-1] > dist[r][c]+1 ) {
            dist[r][c-1] = dist[r][c]+1;
            q.push( r ); q.push( c-1 );
        }
    }

    // short one
    while( !q.empty() ) {
        int r = q.front(); q.pop();
        int c = q.front(); q.pop();

        for(i=0; i<4; i++) {
            int rr = r + dr[i], c + dc[i];
            if( valid( rr, cc ) ) if( dist[rr][cc] > dist[r][c]+1 ) {
                dist[rr][cc] = dist[r][c] + 1;
                q.push( rr ); q.push( cc );
            }

        }
    }

	return 0;
}

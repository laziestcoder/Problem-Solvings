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

char g[10][10], visited[10][10];
int dist[10][10];
int nrow, ncol;

// dfs

void shortestpath( int r, int c, int d ) {

    if( r < 0 || c < 0 || r >= nrow || c >= ncol ) return;
    if( dist[r][c] <= d || g[r][c] == '*' ) return;
    dist[r][c] = d;

    shortestpath( r+1, c, d+1 );
    shortestpath( r-1, c, d+1 );
    shortestpath( r, c+1, d+1 );
    shortestpath( r, c-1, d+1 );


}


int dfs( int r, int c ) {

    if( r < 0 || c < 0 || r >= nrow || c >= ncol ) return 0;
    if( visited[r][c] || g[r][c] == '*' ) return 0;
    if( r == 0 && c == 3 ) return 1;
    visited[r][c] = 1;

    if( dfs( r+1, c ) ) return 1;
    if( dfs( r-1, c ) ) return 1;
    if( dfs( r, c+1 ) ) return 1;
    if( dfs( r, c-1 ) ) return 1;

    return 0;
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

	// dfs
	if( dfs( 1, 0 ) ) printf("path ase\n");
	else printf("path nai\n");

	//shortest path
	for(i=0; i<nrow; i++)
	for(j=0; j<ncol; j++) dist[i][j] = 1000;

//	memset( dist, 63, sizeof( dist ));
//	cout << dist[0][0] << endl;



	shortestpath(1,0,0);


    cout << dist[0][3] << endl;


    int xx; cin >> xx;

	return 0;
}

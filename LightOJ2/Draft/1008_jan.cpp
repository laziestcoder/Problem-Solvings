/*
	Author       :	Jan
	Problem Name :
	Algorithm    :
	Complexity   :
*/

#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <sstream>

using namespace std;

#define i64 long long

i64 n;
int cases, caseno;

int main() {
	freopen("a.in","r",stdin);
	freopen("a.ans","w",stdout);

	scanf("%d", &cases);
	while( cases-- ) {
		scanf("%lld", &n);

		printf("Case %d: ", ++caseno);
		if( n == 1 ) {
			puts("1 1");
			continue;
		}

		i64 sqrtN = int( sqrt( (double)n ) + 1e-11 );
		if( sqrtN * sqrtN != n ) sqrtN++;

		i64 high, low, mid;

		high = sqrtN * sqrtN;
		low = (sqrtN - 1) * (sqrtN - 1) + 1;
		mid = (low + high) / 2;

		i64 x, y;
		if( n == mid ) x = y = sqrtN;
		else if( n > mid ) {
			x = n - mid;
			x = sqrtN - x;
			y = sqrtN;
		}
		else {
			x = sqrtN;
			y = n - low + 1;
		}
		if( !(sqrtN & 1) ) swap(x, y);
		printf("%lld %lld\n", x, y);
	}
	return 0;
}

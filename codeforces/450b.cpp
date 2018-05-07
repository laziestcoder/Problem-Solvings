/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#ifdef laziestcoder

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
	return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
	os << "{";
	for(auto it = v.begin(); it != v.end(); ++it) {
		if( it != v.begin() ) os << ", ";
		os << *it;
	}
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
	os << "[";
	for(auto it = v.begin(); it != v.end(); ++it) {
		if( it != v.begin()) os << ", ";
		os << *it;
	}
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
	os << "[";
	for(auto it = v.begin(); it != v.end(); ++it) {
		if( it != v.begin() ) os << ", ";
		os << it -> first << " = " << it -> second ;
	}
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)

void faltu () { cerr << endl; }

template <typename T>
void faltu( T a[], int n ) {
	for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
	cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) { cerr << arg << ' '; faltu(rest...); }

#else
#define dbg(args...)
#endif

#define MX 2000007

int vis[MX];

int main(){
#ifdef laziestcoder
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int a, b, c, ans, r, d;
	scanf("%d %d %d", &a, &b, &c);
	if(a % b == 0) {
		if(c) ans = -1;
		else ans = 1;
	}
	else {
		r = a % b;
		vis[r] = 1;
		ans = 0;
		while(r) {
			r *= 10;
			d = r/b;
			ans ++;
			if(d == c) break;
			r = r % b;
			if(vis[r]) {
				ans = -1;
				break;
			}
			vis[r] = 1;
		}
		if(!r) {
			if(!c) ans ++;
			else ans = -1;
		}
	}
	cout << ans << endl;

//	timeStamp;
	return 0;
}

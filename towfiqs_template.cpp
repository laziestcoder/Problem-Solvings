/*
	Towfiqul Islam
	CSE, IIUC.
	Bangladesh.
*/


/***********Template Starts Here***********/

//#include <bits/stdc++.h>

#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <deque>
#include <functional>
#include <string>
#include <iostream>
#include <cctype>
#include <set>
#include <climits>
#include <iomanip>
#include <cassert>
#include <unordered_map>

#define LL long long
#define pb push_back
#define nl puts ("")
#define sp printf ( " " )
#define phl printf ( "hello\n" )
#define ff first
#define ss second
#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define MP make_pair
#define FOR(i, x, y) for(int i = (x) ; i <= (y) ; ++i)
#define ROF(i, x, y) for(int i = (y) ; i >= (x) ; --i)
#define CLR(x, y) memset(x,y,sizeof(x))
#define UNIQUE(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))
#define NUMDIGIT(x, y) (((int)(log10((x))/log10((y))))+1)
#define SQ(x) ((x)*(x))
#define ABS(x) ((x)<0?-(x):(x))
#define FABS(x) ((x)+eps<0?-(x):(x))
#define ALL(x) (x).begin(),(x).end()
#define LCM(x, y) (((x)/gcd((x),(y)))*(y))
#define SZ(x) ((int)(x).size())

using namespace std;

typedef long long vlong;
typedef unsigned long long uvlong;
typedef pair<int, int> pii;
typedef pair <vlong, vlong> pll;
typedef vector <pii> vii;
typedef vector<int> vi;

const vlong inf = 2147383647;
const double pi = 2 * acos(0.0);
const double eps = 1e-9;

#ifdef alfa106
#include <ctime>
clock_t tStart = clock();
#define debug(args...) {dbg,args; cerr<<endl;}
#define timeStamp printf("Execution Time: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC)
#else
#define debug(args...)  // Just strip off all debug tokens
#define timeStamp
#endif

struct debugger {
    template<typename T>
    debugger &operator,(const T &v) {
        cerr << v << " ";
        return *this;
    }
} dbg;

//int knightDir[8][2] = { {-2,1},{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2},{-2,-1} };
//int dir4[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};

//#ifdef ONLINE_JUDGE
//freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
//#endif

void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void test() {
    cout << "Testing ..." << endl;
}

inline vlong gcd(vlong a, vlong b) {
    a = ABS (a);
    b = ABS (b);
    while (b) {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int ext_gcd(int A, int B, int *X, int *Y) {
    int x, y, u, v, m, n, a, b, q, r;
    x = 0;
    y = 1;
    u = 1;
    v = 0;
    for (a = A, b = B; 0 != a; b = a, a = r, x = u, y = v, u = m, v = n) {
        q = b / a;
        r = b % a;
        m = x - (u * q);
        n = y - (v * q);
    }
    *X = x;
    *Y = y;
    return b;
}

inline vlong modInv(int a, int m) {
    int x, y;
    ext_gcd(a, m, &x, &y);
    if (x < 0) x += m; //modInv is never negative
    return x;
}

inline vlong power(vlong a, vlong p) {
    vlong res = 1, x = a;
    while (p) {
        if (p & 1) res = (res * x);
        x = (x * x);
        p >>= 1;
    }
    return res;
}

inline vlong bigMod(vlong a, vlong p, vlong m) {
    vlong res = 1 % m, x = a % m;
    while (p) {
        if (p & 1) res = (res * x) % m;
        x = (x * x) % m;
        p >>= 1;
    }
    return res;
}

inline LL lcm(LL a, LL b) {
    LL g = gcd(a, b);
    a = a / g;
    b *= a;
    return b;
}

//inline prm() {
//    for (LL i = 2; i <= 100000; i++) {
//        if (vis[i]) continue;
//        pr.pb(i);
//        for (LL j = i; j * i <= 100000; j++) {
//            vis[j * i] = 1;
//        }
//    }
//    return;
//}

/***********Template Ends Here***********/

int main() {
    init();
    test();
    return 0;
}


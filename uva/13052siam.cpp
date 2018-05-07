/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>

using namespace std;
using namespace __gnu_pbds;

template<typename T>
//using ordered_set = tree<
//	T,
//	null_type,
//	less<T>, // use less_equal to use as multiset without erase operation
//	rb_tree_tag,
//	tree_order_statistics_node_update>;

// gives the number of keys with value strictly less than x
#define lesscount(x) order_of_key(x)
// gives the iterator to kth element (starting from 0)
#define kthiterator(x) find_by_order(x)

#define clock_starts() clock_t begin = clock()
#define clock_ends() clock_t end = clock()
#define print_running_time() double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC; \
printf("Elapsed Time : %.10f second(s)\n", elapsed_secs)
#define readfile(s) freopen(s, "r", stdin)
#define writefile(s) freopen(s, "w", stdout)
#define debug(s) cout<< #s <<" = "<< s <<endl
#define all(v) (v).begin(), (v).end()
#define KeepUnique(v) (v).erase( unique(all(v)), v.end() )
#define cin_cout_is_cool ios_base::sync_with_stdio(false); cin.tie(NULL)
#define printBinary(n) cout << #n << " = " << bitset<64>(n) << endl
#define MEMSET(a,val) memset(a, val, sizeof a)
#define PB push_back
#define endl '\n'
#define cin(n) scanf("%d", &n)
#define popcount(x) __builtin_popcount(x)
#define popcountll(x) __builtin_popcountll(x)

inline int myrand(int l, int r) {
	int ret = rand(); ret <<= 15; ret ^= rand();
	if(ret < 0) ret = -ret; ret %= (r-l+1); ret += l;
	return ret;
}
template <typename F, typename S>
ostream& operator << (ostream& os, const pair< F, S>& p) {
    return os<<"(" <<p.first<<", "<<p.second<<")"; }

typedef pair<int, int> ii;
//template<typename T> using min_pq =
//	priority_queue<T, vector<T>, greater<T> >;

template<typename T>T max(T a_,T b_,T c_) { return max(a_,max(b_,c_)); }
template<typename T>T min(T a_,T b_,T c_) { return min(a_,min(b_,c_)); }
template<typename T>T min(T a_,T b_,T c_, T d_) { return min(min(a_, b_),min(c_,d_)); }
template<typename T>T max(T a_,T b_,T c_, T d_) { return max(max(a_, b_),max(c_,d_)); }

//int dx[] = {-1, +0, +1, +0};
//int dy[] = {+0, +1, +0, -1};

template<typename T> inline T ceil(T num, T d)
{ return (T)(num/d) + (num%d>(T)0 ? (T)1 : (T)0); }
#define block_no(idx) 		(idx/BLOCK_SIZE)
#define block_starting(idx) (block_no(idx)*BLOCK_SIZE)
#define block_ending(idx) 	(min(n, block_no(idx)*BLOCK_SIZE+BLOCK_SIZE-1))
#define block_rank(idx) 	(idx%BLOCK_SIZE)

const int maxn = 1710;
const double magic = 100000000.0;

bool ok[maxn][maxn];
double dp[maxn][maxn];

double get(int i, int j) {
    if(i == 1 and j == 0) return 1;
    else if (i == 0 and j == 1) return 0;
    if(ok[i][j]) return dp[i][j];
    ok[i][j] = true;
    double p1, p2, p3;
    double up = 0.0, down = 0.0;
    if(i >= 1 and j >= 1) {
        p1 = get(i-1, j);
        up += p1*magic;
        down += magic;
    }
    if(i >= 2) {
        p2 = get(i-1, j);
        up += p2*magic;
        down += magic;
    }
    if(j >= 2) {
        p3 = get(i+1, j-2);
        up += p3*magic;
        down += magic;
    }
    return dp[i][j] = up/down;
}

int32_t main () {
    int t; cin>>t;
    for(int cs = 1; cs <= t; cs++) {
        int a, b; cin>>a>>b;
        printf("Case %d: %.3f %.3f\n", cs, get(a, b), 1.0-get(a,b));
    }
	return 0;
}

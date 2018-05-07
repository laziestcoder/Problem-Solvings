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
using ordered_set = tree<
	T,
	null_type,
	less<T>, // use less_equal to use as multiset without erase operation
	rb_tree_tag,
	tree_order_statistics_node_update>;

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
#define cin(n) scanf("%lld", &n)
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
template<typename T> using min_pq =
	priority_queue<T, vector<T>, greater<T> >;

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
#define int long long

const int maxn = 1000010;

bool ok[maxn];
vector<int> ps;

int32_t main () {
    ok[1] = true;
    for(int i=2; i<=1000000; i++) {
        if(ok[i]) continue;
        for(int j=i+i; j <= 1000000; j+=i) {
            ok[j] = true;
        }
    }
    {
        int c = 0;
        for(int i=1; i<=1000000; i++) if(!ok[i]) c++;
        ps.reserve(c);
        for(int i=1; i<=1000000; i++) if(!ok[i]) ps.PB(i);
    }
    int q; cin(q);
    while(q--) {
        int n; cin(n);
        int x = n;
        int tot = 1;
        for(int i=0; i<ps.size() and ps[i]*ps[i]<=n; i++) {
            if(n % ps[i] == 0) {
                int c = 1;
                while(n % ps[i] == 0) {
                    c*=ps[i]; n /= ps[i];
                } c*=ps[i];
                int temp = (c-1)/(ps[i]-1);
                tot *= temp;
            }
        }
        if(n > 1) tot *= (n*n-1)/(n-1);
        tot -= x;
        if(tot < x) puts("deficient");
        else if(tot == x) puts("perfect");
        else puts("abundant");
    }
	return 0;
}

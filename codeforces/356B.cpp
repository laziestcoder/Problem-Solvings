

/******
--------------------------------------------------------------------------------------------------
|    ___________     ___________     __        __    ____________  ______    ______________      |
|    ===========     ===========     ||        ||    ||=========   ======    ==============      |
|        ||          ||       ||     ||   __   ||    ||              ||      ||          ||      |
|        ||          ||       ||     ||  //\\  ||    ||=======       ||      ||          ||      |
|        ||          ||       ||     || //  \\ ||    ||              ||      ||       \\ ||      |
|        ||          ||       ||     ||//    \\||    ||              ||      ||        \\||      |
|        ||          ===========     ||/      \||    ||            ======    ============\\      |
|                                                                                         \\     |
--------------------------------------------------------------------------------------------------

     * Name: Towfiqul Islam
     * CSE, IIUC.
     * Chittagong , Bangladesh.

     * CodeForces ID: Laziest_Coder.
     * CodeChef   ID: alfa106
     * HackerRank ID: Laziest_Coder
     * LightOJ    ID: Towfiqul Islam
     * TopCoder   ID: alfa106
     * UVA        ID: laziestcoder
     * mail       ID: towfiq.106@gmail.com

*****/



/******* header files
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
****/

#include <bits/stdc++.h>
using namespace std;


/******* header files end




/** sieve prime

#define M 100000000
int marked[M/64 + 2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))

void sieve(int n)
{
    for (int i = 3; i * i < n; i += 2)
    {
        if (!on(i))
        {
            for (int j = i * i; j <= n; j += i + i)
            {
                mark(j);
            }
        }
    }
}
**/

/** sieve normal
#define M 100000000
bool marked[M];

void sieve2(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (marked[i] == false)   // i is a prime
          {
            for (int j = i + i; j <= n; j += i)
            {
                marked[j] = true;
            }
         }
    }
}
**/

/** Divisor

vector<int> primes;    // we'll preload primes once at the beginning

int countDivisor(int n)
{
    int divisor = 1;
    for (int i = 0; i < primes.size(); i++)
    {
        if (n % primes[i] == 0)
        {
            int cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    return divisor;
}
**/

/** GCD

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
**/

/**extended euclid where ax+by = gcd (a,b)

typedef pair<int, int> pii;
#define ff first
#define ss second

pii extendedEuclid(int a, int b)   //** returns x, y | ax + by = gcd(a,b)
{
    if(b == 0) return pii(1, 0);
    else
    {
        pii d = extendedEuclid(b, a % b);
        return pii(d.ss, d.ff - d.ss * (a / b));
    }
}
**/

/** LCM

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
**/

/**Modular Inverse

int modularInverse(int a, int n)
{
    pii ret = extendedEuclid(a, n);
    return ((ret.fs % n) + n) % n;
}
**/

/** euler toient function

int phi[M];

void calculatePhi()
{
    for (int i = 1; i < M; i++)
    {
        phi[i] = i;
    }
    for (int p = 2; p < M; p++)
    {
        if (phi[p] == p)   // p is a prime
        {
            for (int k = p; k < M; k += p)
            {
                phi[k] -= phi[k] / p;
            }
        }
    }
}
**/

/** euler toient function 2

int Phi(int n)
{
    int ret = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            ret -= ret / i;
        }
    }

    /** this following case will happen if n is a prime number
          *  in that case we won't find any prime that divides n
           *         that's less or equal to sqrt(n)*/
/*if (n > 1) ret -= ret / n;
    return ret;
}
**/

/**n factorial mod m

int nFactModm(int n,int m)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        factorial %= m;
    }
    return factorial;
}
**/

/** n sum mod m

int nSumModm(int n,int m)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        sum %= m;
    }
    return sum;
}
**/


/***********Template Starts Here***********/

/***

#define pb push_back
#define nl puts("")
#define sp printf( " " )
#define phl printf( "hello\n" )

#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define MP make_pair
#define rep(x,y) for(int (x)=0 ; (x)<(y); ++(x))
#define FOR(i,x,y) for(int i = (x) ; i <= (y) ; ++i)
#define ROF(i,x,y) for(int i = (y) ; i >= (x) ; --i)
#define mms(x,y) memset(x,y,sizeof(x))
#define UNIQUE(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define NODIG(x,y) (((int)(log10((x))/log10((y))))+1)
#define SQ(x) ((x)*(x))
#define ABS(x) ((x)<0?-(x):(x))
#define FABS(x) ((x)+eps<0?-(x):(x))
#define ALL(x) (x).begin(),(x).end()
#define LCM(x,y) (((x)/gcd((x),(y)))*(y))
#define SZ(x) ((int)(x).size())
#define swp(x,y)  long long int t=x; x=y;  y=t;




#define LL long long

typedef long long vlong;
typedef unsigned long long uvlong;
typedef pair < vlong, vlong > pll;
typedef vector<pii> vii;
typedef vector<int> vi;

const vlong inf = 2147383647;
const double pi = 2 * acos ( 0.0 );
const double eps = 1e-9;
const double EPS = 1e9

#ifdef laziestcoder
#include <ctime>
clock_t tStart = clock();
#define debug(args...) {dbg,args; cerr<<endl;}
#define timeStamp printf("Execution Time: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC)
#else
#define debug(args...)  //** Just strip off all debug tokens
#define timeStamp
#endif

struct debugger
{
    template<typename T> debugger& operator, (const T& v)
    {
        cerr<<v<<" ";
        return *this;
    }
} dbg;

//** int knightDir[8][2] = { {-2,1},{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2},{-2,-1} };
//** int dir4[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};

inline vlong gcd ( vlong a, vlong b )
{
    a = ABS ( a );
    b = ABS ( b );
    while ( b )
    {
        a = a % b;
        swap ( a, b );
    }
    return a;
}

int ext_gcd ( int A, int B, int *X, int *Y )
{
    int x, y, u, v, m, n, a, b, q, r;
    x = 0;
    y = 1;
    u = 1;
    v = 0;
    for (a = A, b = B; 0 != a; b = a, a = r, x = u, y = v, u = m, v = n)
    {
        q = b / a;
        r = b % a;
        m = x - (u * q);
        n = y - (v * q);
    }
    *X = x;
    *Y = y;
    return b;
}

inline vlong modInv ( int a, int m )
{
    int x, y;
    ext_gcd( a, m, &x, &y );
    if ( x < 0 ) x += m; //modInv is never negative
    return x;
}

inline vlong power ( vlong a, vlong p )
{
    vlong res = 1, x = a;
    while ( p )
    {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x );
        p >>= 1;
    }
    return res;
}

inline vlong bigmod ( vlong a, vlong p, vlong m )
{
    vlong res = 1 % m, x = a % m;
    while ( p )
    {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m;
        p >>= 1;
    }
    return res;
}

inline LL lcm(LL a, LL b)
{
    LL g = gcd(a,b);
    a = a/g;
    b *= a;
    return b;
}

inline prm()
{
    for (LL i=2; i<=100000; i++)
    {
        if (vis[i]) continue;
        pr.pb(i);
        for (LL j=i; j*i<=100000; j++)
        {
            vis[j*i] = 1;
        }
    }
    return;
}
***/
/***********Template Ends Here***********/


int main ()
{
        int a,n,c[105]= {0},i,j,k;
        cin>>n>>a;
        for(i=1; i <=n; i++)
            cin>>c[i];
        int s=0;
        if(c[a]==1)
            s+=1;
        for(i=1; i<=2;i++)
        {
            if(c[a-i]==1 && c[a+i]==1)
                {
                    s+=2;
                }
            else if(c[a-i]==1 && a+i>n)
                s++;
            else if(c[a+i]==1 && a-i<1)
                s++;
        }
        cout<<s<<endl;
    return 0;
}

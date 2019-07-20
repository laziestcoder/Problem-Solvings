#include<bits/stdc++.h>
using namespace std;

#define PI acos(-1)
#define eps 1e-9
#define inf 100000000
#define MOD 1000000007
//#define harmonic(n) 0.57721566490153286l+log(n)

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sqr(a) ((a) * (a))

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

inline bool EQ(double a, double b)
{
    return fabs(a-b) < eps;
}
//
//debug
#ifdef asif
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p )
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v )
{
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu ()
{
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n )
{
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}
#else
#define dbg(args...)
#endif // asif
#define ll long long int
#define f first
#define s second
#define S(a) scanf("%i", &a)
#define SS(a) scanf("%lli", &a)
#define P(a) printf("%i", a)
#define PP(a) printf("%lli", a)
#define hum printf("\n")

#define val(x, y) x>=1 and x <=4 and y >=1 and y <= 4 and a[x][y] != -1

int a[10][10], p = 1;

int main()
{
    //int a[10][10], p = 1;
    mem(a, -1);
    for(int i = 1; i <= 3; i++)
        for( int j = 1; j <= 3; j++)
            a[i][j] = p++;
    a[4][2] = 0;
    int t, take[11];
    cin >> t;
    string st;
    cin >> st;

    for(int i = 0; i < t; i++) take[i] = st[i] - '0';
    int x = 0;
    vector<pair< int, int > > v;
    for(int i = 0; i < t; i++)
        for(int j = 0; j < 5; j++)
            for(int k = 0; k < 5; k++)
                if(take[i] == a[j][k])
                    v.push_back({j, k});
    for(int i = 0; i < v.size(); i++)dbg(v[i].f, v[i].s);
    int m = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int x, y;
        x = v[i].f - 1, y = v[i].s;
        if(x >= 1 and x <= 4 and a[x][y] != -1) m = 0;
        else
        {
            m = 1;
            break;
        }
    }
    if(m == 0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    m = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int x, y;
        x = v[i].f + 1, y = v[i].s;
        if(x >= 1 and x <= 4 and a[x][y] != -1) m = 0;
        else
        {
            m = 1;
            break;
        }
    }
    if(m == 0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    m = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int x, y;
        x = v[i].f, y = v[i].s-1;
        if(y >= 1 and y <= 4 and a[x][y] != -1) m = 0;
        else
        {
            m = 1;
            break;
        }
    }
    if(m == 0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    m = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int x, y;
        x = v[i].f, y = v[i].s+1;
        if(y >= 1 and y <= 4 and a[x][y] != -1) m = 0;
        else
        {
            m = 1;
            break;
        }
    }
    if(m == 0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;

}

    #include <bits/stdc++.h>

    #define pii pair <int,int>
    #define sc scanf
    #define pf printf
    #define Pi 2*acos(0.0)
    #define ms(a,b) memset(a, b, sizeof(a))
    #define pb(a) push_back(a)
    #define MP make_pair
    #define oo 1<<29
    #define dd double
    #define ll long long
    #define EPS 10E-10
    #define ff first
    #define ss second
    #define MAX 10000
    #define SZ(a) (int)a.size()
    #define getint(a) scanf("%d",&a)
    #define loop(i,n) for(int i=0;i<n;i++)
    #define TEST_CASE(t) for(int z=1;z<=t;z++)
    #define all(a) a.begin(),a.end()
    #define intlim 2147483648
    #define inf 1000000
    #define rtintlim 46340
    #define llim 9223372036854775808
    #define rtllim 3037000499
    #define ull unsigned long long
    #define I int

    using namespace std;

    int main()
    {
        ///freopen("in.txt","r",stdin);
        ///freopen("out.txt","w",stdout);
        int t;
        cin>>t;
        TEST_CASE(t)
        {
            int n,m;
            sc("%d %d",&n,&m);
            pf("Case %d: ",z);
            if(n==1 || m==1)
                {
                    pf("%d\n",n*m);
                }
            else if(n==2 || m==2)
            {
                int ans=((n*m)/8)*4;
                if((n*m)%8==2)
                    ans+=2;
                else if((n*m)%8==6 || (n*m)%8==4)
                    ans+=4;
                pf("%d\n",ans);
            }
            else
            {
                pf("%d\n",((n*m)+1)/2);
            }
        }
        return 0;
    }

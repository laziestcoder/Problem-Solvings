#include<bits/stdc++.h>

#define eps 1e-8
#define xx first
#define yy second
#define LL long long
#define inf 100000
#define pb push_back
#define vsort(v) sort(v.begin(),v.end())
#define pi acos(-1)
#define clr(a,b) memset(a,b,sizeof a)
#define bclr(a) memset(a,false,sizeof a)
#define pii pair<int,int>
#define pll pair<LL,LL>
#define MOD 1000000007
#define MP make_pair
#define MX 200005

using namespace std;

int main(){
    LL n,a,b,c; cin>>n>>a>>b>>c;
    LL ans=0ll;
    if((b-c)<a){
        if(b<=n){
            LL nn=n-b+1ll;
            cout<<nn/(b-c)<<endl;
        }
        else cout<<n/a<<endl;
    }
    else cout<<n/a<<endl;
    return 0;
}

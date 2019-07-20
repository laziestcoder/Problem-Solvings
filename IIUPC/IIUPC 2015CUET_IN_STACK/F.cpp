#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>

using namespace std;

#define  mem(x,y) memset(x,y,sizeof(x))
#define sn scanf
#define pf printf
#define pb push_back

typedef long long int ll;

double dp[2005][2005];
int vis[2005][2005];

double rec(int a,int b)
{
    if(a+b<=1)
    {
        if(a==1)
            return 1.0;
        else return 0.0;
    }
    double &ret=dp[a][b];
    if(vis[a][b]!=-1)
        return dp[a][b];
    vis[a][b]=1;
    int cnt=0;
    ret=0;
    if(a>=2)
    {
        ret=ret+rec(a-1,b);
        cnt++;
    }
    if(b>1)
    {
       ret=ret+rec(a+1,b-2);
        cnt++;
    }
    if(a>0&&b>0)
    {
        ret=ret+rec(a-1,b);
        cnt++;
    }
    if(cnt>0)
    ret=ret/(double)cnt;
    return ret;
}

int main()
{
    int i,j,k,n,m,a,b,c,d,cs=1,t,s,u,v;
    memset(vis,-1,sizeof(vis));
    sn("%d",&t);
    while(t--)
    {
        sn("%d %d",&a,&b);
        double ans=rec(a,b);
        if(a+b==0)
            pf("Case %d: %.3lf %.3lf\n",cs++,ans,ans);
        else
        pf("Case %d: %.3lf %.3lf\n",cs++,ans,1.0-ans);
    }
    return 0;
}

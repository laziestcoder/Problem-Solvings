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

int ncr[1015][1015];
int dp[1015][1015];
int R=-1,C=1;
int main()
{
    int i,j,k,l,m,n,a,c,b,cs=1,t,x1,x2,y1,y2,ans,Q,d;
    memset(ncr,0,sizeof(ncr));
    memset(dp,0,sizeof(dp));

    for(i=1;i<=1003;i++)
    {
        for(j=1;j<=1003;j++)
        {

            ncr[i][j]=(ncr[i-1][j]+ncr[i][j-1])%912;
            if(j==1&&i==1)
                ncr[i][j]=1;
        }
    }
    sn("%d",&t);
    while(t--)
    {
        sn("%d %d",&n,&m);
        //n++;m++;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                dp[i][j]=(ncr[i][j]*ncr[n-i+1][m-j+1])%912;
            }
        }
        sn("%d",&Q);
        pf("Case %d\n",cs++);
        int qs=1;
        while(Q--)
        {
            sn("%d %d %d %d",&a,&b,&c,&d);
            a++;b++;c++;d++;
            ans=0;
            x1=c;y1=b;
            x2=a;y2=d;
            a=x1;b=y1;
            while(a>=x2&&b<=y2)
            {
                ans=(ans+dp[a][b])%912;
                a--;b++;
            }
            a++;b--;
            b++;
            while(b<=y2)
            {
                ans=(ans+(ncr[a-1][b]*ncr[n-a+1][m-b+1]))%912;
                b++;
            }
            b--;
            a--;
             while(a>=x2)
            {
                ans=(ans+(ncr[a][b]*ncr[n-a+1][m-b]))%912;
                a--;
            }
            ans=(ncr[n][m]-ans+912)%912;
            pf("   Query %d: %d\n",qs++,ans);
        }
    }
    return 0;
}

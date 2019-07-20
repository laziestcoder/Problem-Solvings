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

char st[500],ss[500];

int main()
{
    int i,j,k,n,m,cs=1,t,a,ans;
    sn("%d",&t);
    while(t--)
    {
        sn("%d %s %s",&n,&st,&ss);
        ans=0;
        for(i=0;i<n;i++)
        {
            a=abs(st[i]-ss[i]);
            ans+=min(a,10-a);
        }
        pf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}

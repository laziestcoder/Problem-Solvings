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

int ar[1000000];

int main()
{
    int i,j,k,l,m,n,a,b,c,cs=1,t,ta,td,H;
    sn("%d",&t);
    while(t--)
    {
        sn("%d %d %d %d",&n,&H,&ta,&td);
        for(i=0;i<n;i++)
        {
            sn("%d",&ar[i]);
        }
        sort(ar,ar+n);
        a=n-1;b=0;
        for(i=0,j=a;i<n;i++)
        {
            for(;j>i;j--)
            {
                if(ar[i]+ar[j]<H)
                {
                    b++;
                    j--;
                    break;
                }
            }
        }
        int ans=0;
        ans=b*td+(n-2*b)*ta;
        ans=min(ans,n*ta);
        pf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}

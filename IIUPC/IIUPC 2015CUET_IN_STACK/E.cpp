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

int dp[1<<15];
char st[20][20];

int rec(int msk,int n)
{
   if((1<<n)-1==msk)
   {
       return 1;
   }
   int &ret=dp[msk];
   if(ret!=-1)
   {
       return ret;
   }
   ret=0;
   int i,j;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if((((msk&(1<<i))==0&&(msk&(1<<j))!=0)||((msk&(1<<i))!=0&&(msk&(1<<j))==0))&&(st[i][j]=='Y'||st[j][i]=='Y'))
           {
               int aa=msk|(1<<i);
               aa=aa|(1<<j);
               ret=(ret+rec(aa,n))%10000;
           }
       }
   }
   return ret;
}
int main()
{
    int i,j,k,n,m,a,b,c,d,cs=1,t,s,u,v;
    sn("%d",&t);
    while(t--)
    {
        sn("%d",&n);
        for(i=0;i<n;i++)
        {
            sn("%s",&st[i]);
        }
        memset(dp,-1,sizeof(dp));
        pf("Case %d: %d\n",cs++,rec(1,n));
    }
    return 0;
}

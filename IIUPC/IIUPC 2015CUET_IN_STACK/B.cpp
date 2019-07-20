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


char r[55];

int main()
{
    int t,T;
    scanf("%d",&t);
    T=t;
    while(t--)
    {
        scanf("%s",&r);
        int l=strlen(r);
        int cnt=0;
        for(int i=0;i<l;i++)
        {
            if(r[i]=='B' || r[i]=='D' || r[i]=='S')
            {
                continue;
            }
            if(i+1<l && (r[i+1]=='B' || r[i+1]=='S'))
            {
                    continue;
            }
            if(i+2<l && r[i+2]=='B')
            {
                    continue;

            }
            if(i-1>=0 && r[i-1]=='S')
                continue;
            cnt++;
        }
        printf("Case %d: %d\n",T-t,cnt);
    }


    return 0;
}

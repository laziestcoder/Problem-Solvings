#include<bits/stdc++.h>
using namespace std;

#define  mem(x,y) memset(x,y,sizeof(x))
#define sn scanf
#define pf printf


typedef long long int ll;



int main()
{
    char ss[100],ch;
    int l,i,t,x,mx,j,cnt;
    scanf("%d",&t);
    for(x=1;x<=t;x++)
    {

        scanf("%s",&ss);
        mx=0;
        l=strlen(ss);
        for(i=0;i<l;i++)
        {
            if(ss[i]=='<')
            {
                cnt=1;
                for(j=i+1;j<l;j++)
                {
                    if(ss[j]=='-')
                        cnt++;
                    else
                        break;
                }
                mx=max(mx,cnt);
                cnt=1;
                for(j=i+1;j<l;j++)
                {
                    if(ss[j]=='=')
                        cnt++;
                    else
                        break;
                }
                mx=max(cnt,mx);
            }
        }
        for(i=l-1;i>=0;i--)
        {
            if(ss[i]=='>')
            {
                cnt=1;
                for(j=i-1;j>=0;j--)
                {
                    if(ss[j]=='-')
                        cnt++;
                    else
                        break;
                }
                mx=max(mx,cnt);
                cnt=1;
                for(j=i-1;j>=0;j--)
                {
                    if(ss[j]=='=')
                        cnt++;
                    else
                        break;
                }
                mx=max(cnt,mx);
            }
        }
        if(mx!=0)
        printf("Case %d: %d\n",x,mx);
        else
            printf("Case %d: -1\n",x);

    }

    return 0;
}

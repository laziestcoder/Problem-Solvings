#include<bits/stdc++.h>
#define lld long long
#define mod 1000000007
using namespace std;

lld int mp(lld int q, lld int w, lld int a)
{
    lld int st, p=1,c=0;
    if(q==1)
    {
        c++;
        cout<<"1 ";
    }
    for(st=1; ; st++)
           {
               p=p*a;
               p%=mod;
               if(p>=q && p<=w)
                        {
                            c++;
                            cout<<p<<" ";
                        }
               else if(p>w)
                       break;
           }
           if(c==0)
           {
               cout<<"-1";
           }
           return 0;

}

int main ()
{
    lld int s,e,p,v;
    cin>>s>>e>>p;
    //s%=mod;
    e%=mod;
    mp(s,e,p);
    return 0;
}

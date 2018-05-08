/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define lli long long int

template<typename P> struct Cmp
{
    bool operator()(const P &p1, const P &p2)
    {
        if(p1.second < p2.second) return true;
        if(p1.second == p2.second) return p1.first < p2.first;
        return false;
    }
};


int main ()
 {
     lli n,m,k,i;
     cin>>n>>m>>k;
     lli x,s,ans=0;
     cin>>x>>s;
     pair < lli, lli > a[m],c[k];

     for(i=0;i<m;i++)
        scanf("%lld",&a[i].first);

     for(i=0;i<m;i++)
        scanf("%lld",&a[i].second);

     for(i=0;i<k;i++)
        scanf("%lld",&c[i].first);

     for(i=0;i<k;i++)
        scanf("%lld",&c[i].second);

    lli p=-1;
    for(i=0; i<k; i++)
    {
        if(c[i].first<= n && c[i].second<= s)
            {
                p=i;

            }
        else
            break;
    }
    if(p>-1)
    {
        n=n-c[p].first;
        s=s-c[p].second;
    }
    sort(a,a+m, Cmp< pair <lli, lli> >());
    lli mx=0,mn=3e9,ss=s,nn=n;
    p=-1;
    if(n>0){
 here:       for(i=0; i<m; i++)
        {
            if(a[i].first<= n && a[i].second<= s)
            {
                if(mx<a[i].first)
                {
                    if(mn>a[i].second)
                    {
                        mx=a[i].first;
                        ans+=
                        if(ss-mn > 0 && nn-mx>0)
                        {
                            ss-=mn;
                            mn=3e9;
                            nn-=mx;
                            mx=0;

                        }
                    }
                    else
                        break;
                }
            }
        else
            break;
        }
    }
    else
        {
            cout<<0<<endl; exit (0);
        }

    if(p>-1)
     ans=n*a[p].first;
    if(ans==0)
    {
        ans=n*x;
    }
    cout<<ans<<endl;

    return 0;
 }

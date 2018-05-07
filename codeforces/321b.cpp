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
template<typename P> struct Cmp //compare function or sort function for descending order 3 2 1
{
    bool operator()(const P &p1, const P &p2)
    {
        if(p1.second < p2.second) return true;  // change > to < for ascending order
        if(p1.second == p2.second) return p1.first < p2.first;
        return false;
    }
};

pair < long long int, long long int > v[100005];
int main ()
{
    long long int n,d,i,a,b,s=0,j=0,mx=0;
    cin>>n>>d;
    for(i=0; i<n; i++)
        {
            cin>>a>>b;
            v[i].second=b;
            v[i].first=a;
        }

      //  sort(v,v+n, Cmp<pair<long long int, long long int> >());
        sort(v,v+n);
      // cout<<v[n-1].first<<endl<<v[n-1].second<<endl;
        for(i=1; i<n; i++)
        v[i].second+=v[i-1].second;
       // cout<<s<<endl;
        for(i=0;i<n;i++)
        {
            for(; j<n;j++)
            {
                if(v[j].first<v[i].first+d)
                    continue;
                else
                    break;
            }
            s=v[j-1].second;
            if(i)
                s-=v[i-1].second;
            mx=max(mx,s);
        }
    cout<<mx<<endl;
    return 0;
}

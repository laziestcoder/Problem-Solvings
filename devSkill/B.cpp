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

   template<typename P> struct Cmp
{
    bool operator()(const P &p1, const P &p2)
    {
        if(p1.second > p2.second) return true;
        if(p1.second == p2.second) return p1.first < p2.first;
        return false;
    }
};

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    vector < pair < string, double > > v;
    int it,p;
    string st;
    it=n;
    while(it--)
    {
        pair<string, double> cpl;
        cin>>cpl.first;
        cin>>cpl.second;
        v.push_back(cpl);
    }

    sort(v.begin(), v.end(), Cmp<pair<string, double> >());
    int c=0;
    for(it=0; it<n; it++)
    {
        if(v[it].second !=v[it-1].second)
            c++;
        cout<<c<<"."<<v[it].first<<endl;
    }
    return 0;

}

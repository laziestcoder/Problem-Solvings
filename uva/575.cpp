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
#define ll long long
ll powr(ll n, ll k)
{
    ll int p,i=1;
    for(p=1;p<=k;p++)
    {
        i=n*i;
    }
    return i;
}

int main ()
{
    string s;
    while(cin>>s)
    {
        ll int i,n=0,k;
        if(s[0]=='0')
            return 0;
            //cout<<s<<endl;
        for(i=s.length()-1, k=1; i>=0; i--,k++)
        {
           //cout<<s[i]<<" ";
            n=n+((s[i]-'0')*(powr(2,k)-1));
            //cout<<(s[i]-'0')*(powr(2,k)-1)<<endl;
        }
        printf("%lld\n",n);
    }
    return 0;
}

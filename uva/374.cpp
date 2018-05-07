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
ll modpow(ll b, ll n, ll m) {  //b=base, n=power, m=mod
	ll r = 1;
	while(n > 0) {
		if(n & 1) {
			r = r * b;
			if(r >= m) r %= m;
		}
		n >>= 1;
		b = b * b;
		if(b >= m) b %= m;
	}
	return r % m;
}
int main ()
{
    ll int b,n,m;
    while(cin>>b>>n>>m && EOF){
        cout<<modpow(b,n,m)<<endl;
    }

    return 0;

}

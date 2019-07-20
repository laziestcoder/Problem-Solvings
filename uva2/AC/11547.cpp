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
int main ()
{
	int t,i;
	long long int ans=0,n;
	cin >> t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		ans=(((((n*567)/9)+7492)*235)/47)-498;
		ans%=100;
		ans/=10;
		if(ans<0)
            cout<<ans*-1<<endl;
        else
            cout<<ans<<endl;
	}
	return 0;
}

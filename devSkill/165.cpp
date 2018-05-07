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
	long long int x,y;
	int t,i=0;
	cin>>t;
	while(1)
	{
		i++;
		cin>>x>>y;
		x=(2*x)+(3*y);
		cout<<"Case "<<i<<": ";
		printf("%lld\n",x);
		if(i==t)
		break;
	}
	return 0;
}

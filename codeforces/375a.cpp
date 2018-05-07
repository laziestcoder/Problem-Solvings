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
	int x[3];
	scanf("%d%d%d",&x[0],&x[1],&x[2]);
	
	sort(x,x+3);
	int d1=x[2]-x[1],d2=x[1]-x[0];
	int ans=0;
	ans=d2+d1;
	cout<<ans<<endl;
	exit (0);
}

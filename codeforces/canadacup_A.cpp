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
	 int n;
	 string s;
	 cin>>n>>s;
	 int i,ans=0;
	 for(i=0; i<n; i++)
	 {
		 if(s[i]=='<')
		 {
			 ans++;
		 }
		 else 
		   break;
	 }
	 for(i=n-1; i>=0; i--)
	 {
		 if(s[i]=='>')
		 {
			 ans++;
		 }
		 else 
		 break;
	 }
		 
	cout<<ans<<endl;
	exit (0);
 }

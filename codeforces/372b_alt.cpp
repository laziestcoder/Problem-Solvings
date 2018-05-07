/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/
#include "bits/stdc++.h"
using namespace std; 
int main ()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	string s;
	
	cin>>s;

	int n=s.size();
	
	if(n<26)
	{
		cout<<-1<<endl;
		exit (0);
	}
	
	int a[26],i,qt=0,c=0;
	
	for(i=0; i<26; i++)
		a[i]=0;
	
	
	for(i=0; i<n-25;i++)
	{
		qt=0;c=0;
		for(int j=i; j<i+26; j++)
		{
			if(s[j]>='A' && s[j]<='Z')
			{
				if(a[s[j]-'A']==0)
				 a[s[j]-'A']=1;
				else if(a[s[j]-'A']==1)
				 {
					c=1;
					break;
				 }
				
			}
			else if(s[j]=='?')
					qt++;
					
		}
		if(c)
		{
			for(int k=0; k<26; k++)
				a[k]=0;	
		}
		if(!c)
		 break;
	 }
	if(qt)
	{
		for(int j=i; j<i+26; j++)
		{
			if(s[j]=='?')
			{
			for(int k=0; k<26;k++)
			{
				if(a[k]==0)
				{
					s[j]='A'+k;
					a[k]=1;
					break;
				}
			}
			
			}
		}
	}
	for(i=0;i <n; i++)
	{ 
		if(s[i]=='?')
		s[i]='A';
	}
	if(c)
	cout<<-1<<endl;
	else 
	cout<<s<<endl;
	exit (0);
}

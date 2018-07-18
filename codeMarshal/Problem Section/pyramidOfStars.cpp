#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int T,n,t,i,tmp;
	cin>>T;
	for(t=1;t<=T;t++)
	{
		cin>>n;
		cout<<"Case "<<t<<":"<<endl;
		for(i=1;i<=n;i++)
		{
			tmp=i;
			while(tmp--)
			{
				cout<<"*";

			}cout<<endl;

		}
		for(i=n-1;i>=1;i--)
		{
			tmp=i;
			while(tmp--)
			{
				cout<<"*";

			}cout<<endl;
		}
	}
	return 0;
}

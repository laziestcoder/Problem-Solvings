#include<bits/stdc++.h>

using namespace std;
map<int,int>m;
int main()
{

	long long int a,b,i,j;

	cin>>a>>b;

	for( j=1;j<=a;j++)
	{
		cin>>m[j];
	}
	int prev=0,counter=2,increase=1,ans=0;
	if(b==1||b==2)
	{

		cout<<m[1]<<endl;
	}
	else
	{

	for( i=2;i<=a;i++)
	{
		prev=increase;
		increase+=counter;
		counter++;

		if(increase>=b)
		{
			ans=b%prev;
			if(ans==0)
			{
				ans=i;
			}
			break;
		}
	}

	cout<<m[ans]<<endl;
	}



	return 0;
}

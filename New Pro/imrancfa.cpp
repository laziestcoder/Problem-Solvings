#include<bits/stdc++.h>
using namespace std;

int main()
{


	long long int n,maxx=0,minn=0;


	cin>>n;
	if(n<=7)
	{
		if(n==1)
			cout<<"0 1\n";
		if(n>1&&n<=5)
		{
			cout<<"0 2\n";
		}
		if(n==6)
		{
			cout<<"1 2\n";
		}
		if(n==7)
		{
			cout<<"2 2\n";
		}
	}
	else if(n>7)
	{
	    int take=n/7;
	    maxx=(2*take);
	    minn=(2*take);
	    if(n%7==0)
		{
			cout<<minn<<" "<<maxx<<endl;
		}
		else
		{
		 if(n%7<=2)
		{
			maxx=maxx+n%7;
		}
		if(n%7>2&&n%7<=5)
		{
			maxx=maxx+2;

		}
		if(n%7>5)
		{
			maxx=maxx+2;
			minn++;
		}
		cout<<minn<<" "<<maxx<<endl;
		}



	}

	return 0;
}

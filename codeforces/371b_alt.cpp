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
	long long int a[100005],n,sum=0,i;
	double avg=0;
	scanf("%lld",&n);
	for(i=0; i<n; i++)
	{
		scanf("%lld",a+i);
	}
	sort(a+0, a+(n-1));
	
	int c=0;
	for(i=n;i>1;i--)
	{
		avg=(sum*1.0)/i;
		if(avg== (sum/i))
		c=1;		
	}
	if(c)
	printf("YES\n");
	else
	printf("NO\n");
	
	exit (0);
}

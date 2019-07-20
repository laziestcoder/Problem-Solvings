/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
int main()
{
	long long int a,b,c;
	while(scanf("%lld%lld",&a,&b)==2)
	{
		if(a>b)
			c=a-b;
		else
			c=b-a;
		printf("%lld\n",c);
	}
	return 0;
}
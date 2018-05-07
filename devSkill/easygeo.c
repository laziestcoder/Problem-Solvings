/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
int main ()
{
	long long int x,y;
	int t,i=0;
	scanf("%d",&t);
	while(1)
	{
		i++;
		scanf("%lld %lld",&x,&y);
		printf("Case %d: %lld\n",i,(2*x)+(3*y));
		if(i==t)
		break;
	}
	return 0;
}

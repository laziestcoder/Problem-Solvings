/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	long amount=0, x;
	int tc, i;
	scanf("%d",&tc);
	for(i=1;i<=tc;i++)
	{
		scanf("%s",str);
		if(strcmp(str,"donate")==0)
		{
			scanf("%ld",&x);
			amount+=x;
		}
		else
			printf("%ld\n",amount);
	}
   return 0;
}
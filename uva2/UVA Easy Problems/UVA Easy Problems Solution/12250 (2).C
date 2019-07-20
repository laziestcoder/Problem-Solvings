/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <string.h>
#include <stdio.h>
int main()
{
	char ans[30];
	int i=0;
	while(1)
	{
	    scanf("%s",ans);
		if(strcmp(ans,"#")==0)  //if(ans[0]=='#')
			break;
		i++;
		if(strcmp(ans,"HELLO")==0)
			printf("Case %d: ENGLISH\n",i);
		else if(strcmp(ans,"HOLA")==0)
			printf("Case %d: SPANISH\n",i);
		else if(strcmp(ans,"HALLO")==0)
			printf("Case %d: GERMAN\n",i);
		else if(strcmp(ans,"BONJOUR")==0)
			printf("Case %d: FRENCH\n",i);
		else if(strcmp(ans,"CIAO")==0)
			printf("Case %d: ITALIAN\n",i);
		else if(strcmp(ans,"ZDRAVSTVUJTE")==0)
			printf("Case %d: RUSSIAN\n",i);
		else
			printf("Case %d: UNKNOWN\n",i);
    }
	return 0;
}

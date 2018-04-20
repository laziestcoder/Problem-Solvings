/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

// Accepted- 12403 	Save Setu
#include<stdio.h>
#include<string.h>
int main()
{
    int i,tc,n,t=0;
    char str[50];
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%s",str);
        if(strcmp(str,"donate")==0)
        {
            scanf("%d",&n);
            t = t + n;
        }
        else
            printf("%d\n",t);
    }
    return 0;
}

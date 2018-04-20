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
int main ()
{
    char str[85];
    int t,i,l,m=0,k,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",str);
        k=1;
        m=0;

        l=strlen(str);
        for(j=0; j<=l; j++)
        {
            if(str[j]=='o' || str[j]=='O' )
            {
                m=m+k;
                k=k+1;
            }
            else if(str[j]=='x' || str[j]=='X' )
                  k=1;

        }
        printf("%d\n",m);

    }




    return 0;
}


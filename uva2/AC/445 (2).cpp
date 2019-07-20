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
    int x=0,i,j,p=0;
    char s[140];
    while ( gets(s) )
    {
        p=strlen(s);
        for(j=0; j<p; j++)
        {
            if(s[j]>='0' && s[j]<='9' )
                x=x+(s[j]-'0');
            else
            {
                if(x==0)
                    x=1;
                for(i=0; i<x; i++)
                {
                    if (s[j]=='b')
                        printf(" ");
                    else if (s[j]>='A' && s[j]<='Z' || s[j]=='*')
                        printf("%c",s[j]);
                    else if(s[j]=='!')
                        printf("\n");
                }
                x=0;
            }
        }
        printf("\n");
    }
    return 0;
}

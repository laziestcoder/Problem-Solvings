/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main ()
{
    int t,c;
    long l;
    char *p, *e,s[100000];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]", s);
        c=0;
        for(p=s; ; p=e)
        {
            l=strtol(p, &e, 0);
            if(p==e)
            {
                break;
            }
            c++;

        }
        printf("%d\n",c);
    }
    return 0;
}

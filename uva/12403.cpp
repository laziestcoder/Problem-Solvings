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
    int c,t,k,sum=0;
    char s[7];
    scanf("%d",&t);
    for(c=1; c<=t; c++)
    {
        k=0;

        scanf("%s",s);
        if(s[0]=='d')
        {
            scanf("%d",&k);
            sum+=k;
        }
        else if(s[0]='r')
            printf("%d\n",sum);

    }
    return 0;
}

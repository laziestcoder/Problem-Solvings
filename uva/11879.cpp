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
    while(1)
    {
        string s;
        cin>>s;
        int l,i,sum=0,x=0;
        l=s.length();
        if(l==1 && s[0]=='0')
            break;
        for(i=0; i <l; i++)
        {
            sum=x*10+(s[i]-'0');
            x=sum%17;
        }
        printf("%d\n",x?0:1);
    }
    return 0;
}

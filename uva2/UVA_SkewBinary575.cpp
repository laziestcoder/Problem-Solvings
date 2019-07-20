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
int main()
{
    char n[100];
    long long i,sum,x,l,a,z;
    while(gets(n))
    {
        if(n[0]=='0')
            break;
        else
        {
            sum=0;
        l=strlen(n);
        for(i=0;i<l;i++)
        {
            x=n[i]-'0';
            a=x*(pow(2,l-i)-1);
            sum+=a;

        }
        cout<<sum<<endl;;
        }
    }
    return 0;
}


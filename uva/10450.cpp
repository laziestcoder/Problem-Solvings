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
    long long int t,i=0,a,b,s,tm,n;
    cin>>t;
    while(t--)
    {
        a=1;
        b=1;
        s=0;
        cin>>n;
        while(n--)
        {
            s=a+b;
            a=b;
            b=s;
        }
        printf("Scenario #%lld:\n",++i);
        printf("%lld\n\n",s);
    }
    return 0;
}

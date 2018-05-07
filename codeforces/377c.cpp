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
    long long int b,d,s,p,mx;
    scanf("%lld %lld %lld",&b,&d,&s);
    if((b==d && d==s) || (b+d+s==1))
        cout<<0<<endl;
    else
    {
        long long int sum=0;
        p=b+d+s;
        mx=max(b,max(d,s));

        if(b%mx!=0 || b==0)
        {
            sum+= mx-(b%mx)-1;
        }
        if(d%mx!=0 || d==0)
        {
            sum+=mx-(d%mx)-1;

        }
        if(s%mx!=0 || s==0)
        {
            sum+=mx-(s%mx)-1;

        }
        cout<<sum<<endl;
    }
    return 0;
}

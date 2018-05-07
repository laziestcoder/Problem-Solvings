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
    long long int sum=0,n,a;
    while(scanf("%lld %lld",&n,&a)==2)

    {
        for(long long int i=1; i<=n; i++)
        {
            sum=sum+(i*pow(a,i));
        }
        printf("%lld\n",sum);
        sum=0;
    }

    return 0;
}

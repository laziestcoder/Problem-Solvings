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
    long long int a,b,c;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF){
    long long int x;
    x=(52*5*a+52*2*b)*c;
    printf("%lld\n",x);
}
return 0;
}

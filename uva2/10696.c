/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
long long f91(long long n)
{
    long long N;
    if(n>=101)
        N=n-10;
    else
        N=f91(f91(n+11));
    return N;
}
int main()
{
    long long n,c;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else
           c=f91(n);
        printf("f91(%lld) = %lld\n",n,c);
    }
    return 0;
}

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
    long long int n,a,b,c,x=0,ans=0;
    scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
    x=4-(n%4);
    if(n%4==0 && n!=0)
    {
        cout<<ans<<endl;
        return 0;
    }
    if(x==4)
        ans=min(4*a,min(c+a,2*b));
    else if(x==3)
        ans=min(3*a,min(c,b+a));
    else if(x==2)
        ans=min(2*a,min(b,2*c));
    else if( x == 1 )
        ans=min(a,min(3*c,c+b));
    printf("%lld\n",ans);

    return 0;
}

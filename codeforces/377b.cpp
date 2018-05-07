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
   // while(1){
    long long int n,k,a[505],i,ans=0,p=0;
    scanf("%lld %lld",&n,&k);

    for(i=0; i<n; i++)
        scanf("%lld",a+i);
    ans=0;

    for(i=0; i<n-1; i++)
    {
        p=0;

        if(a[i]+a[i+1]<k)
        {
            p=k-a[i]-a[i+1];
            ans+=p;
            a[i+1]+=p;
        }
    }
    printf("%lld\n",ans);
    for(i=0; i<n; i++)
    {
        cout<<a[i];
        if(i<n-1)
            cout<<" ";
    }
    cout<<endl;
    //}
    return 0;
}

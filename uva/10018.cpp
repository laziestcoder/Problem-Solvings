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
#define ll long long
ll int rev(ll int n)
{
    ll int s=0;
    while(n)
    {
        s=s*10+(n%10);
        n/=10;
    }
    return s;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int k,n;
        k=0;
        cin>>n;
        //cout<<rev(n)<<endl;
        while(1)
        {
            if(rev(n)==n)
                break;
            k++;
            n+=rev(n);
        }
        cout<<k<<" "<<n<<endl;
    }
    return 0;
}

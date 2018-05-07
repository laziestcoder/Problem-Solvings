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
    long long int n;
    cin>>n;
    int ans=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a && b )
            ans++;
        else if(b && c)
            ans++;
        else if( a && c)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}

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
    int t,i,n,j,a[10000];
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a+0,a+n);
        cout<<"Case "<<j<<": "<<a[n-1]<<endl;
    }
    return 0;
}

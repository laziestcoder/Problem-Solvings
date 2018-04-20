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
    int t,i,a[60],j,high,low,n;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        high=0;
        low=0;
        cin>>n;
        for(j=1; j<=n; j++)
            cin>>a[j];
        for(j=1; j<n; j++)
        {
            if(a[j]>a[j+1])
                low++;
            else if(a[j]<a[j+1])
                high++;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}

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
int a[200005];
int main ()
{

    int n,i;
    cin>>n;

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<=n; i++)
    {
        if( a[i] <0 )
        {
            cout<< "NO" <<endl;
            return 0;
        }
        if(a[i]&1)
            a[i+1]--;
    }
    cout<<"YES"<<endl;
    return 0;
}

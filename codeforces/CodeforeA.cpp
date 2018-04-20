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
    int m,n,i,a[1000],sum=0,count=0;
    cin>>n;
    cin>>m;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a+0,a+n);
    for(i=n-1; i>=0; i--)
    {
        sum+=a[i];
        if(sum<m)
            count++;
        else if(sum>=m)
        {
            count=count+1;
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}

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
int a[100005];
int main ()
{
    int n,c,b,mx=1,i=0;
    cin>>n;
    c=1;b=0;
    while(i<n)
    {
        cin>>a[i];
        if(a[i-1]<=a[i] && i>0)
        {
            c++;
            mx=max(c,mx);
        }
        else
            c=1;
        i++;
    }
    cout<<mx<<endl;
    return 0;
}

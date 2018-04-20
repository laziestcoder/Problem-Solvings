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
    int a[10000],l=1,i,n;
    while(1)
    {
        a[1]=1;
        cin>>n;
        for(i=1; i<=n; i++)
            a[1]*=i;
        cout<<a[1];
    }

}

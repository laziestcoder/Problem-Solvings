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
long long n,i,a[2000001];
int main()
{

    while(cin>>n)
    {

        if(n==0)
            break;
        else
            for(i=0; i<n; i++)
                cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n-1;i++)
            cout<<a[i]<<" ";
        cout<<a[n-1]<<endl;
    }
    return 0;
}

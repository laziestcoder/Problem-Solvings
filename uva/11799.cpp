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
    int t,i=1;
    cin>>t;
    while(i<=t)
    {
        int n,p,s=0;
        cin>>n;
        while(n)
        {
            n--;
            cin>>p;
            s=max(s,p);
        }
        cout<<"Case "<<i<<": "<<s<<endl;
        i++;
    }
    return 0;
}

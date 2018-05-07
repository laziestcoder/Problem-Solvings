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
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0,s,d=100,i;
        cin>>i;
        while(i--)
        {
            cin>>s;
            d=min(d,s);
            sum=max(sum,s);
        }
        cout<<(sum-d)*2<<endl;
    }

    return 0;
}

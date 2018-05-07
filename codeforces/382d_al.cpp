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
    long long int n,d,i;
    cin>>n;
    if(n==2 || n==3)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(n%2==0 || n|2 )
    cout<<2<<" "<<(n|2)<<endl;
    else if(n%3==0 || n|3)
    cout<<3<<endl;
    else if(n|1)
    cout<<1<<endl;
    cout<<(n|1)<<endl;
    return 0;
}

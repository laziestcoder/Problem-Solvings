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
    int t;
    cin>>t;
    long long int n;
    while(t--)
    {
        cin>>n;
        n=((3*n*n*n*n)+(2*n*n*n)-(3*n*n)-(2*n))/12;
        cout<<n<<endl;
    }
    return 0;
}

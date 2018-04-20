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
    int n,m;
    while(1)
    {
        cin>>n>>m;
        if( !n || !m )
            return 0;
        cout<<floor(sqrt(m))+1 - (ceil(sqrt(n)))<<endl;
    }
    return 0;
}

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
    int i;
    for(i=1;i<=t; i++)
    {
        double v,n;
        cin>>v>>n;
        printf("-%.2lf\n",v/n);
    }
    return 0;
}

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
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int p,k,d;
        cin>>p>>k>>d;
        p=(p+k);
        d=p+d-(k%d);
        printf("Case %d: %d\n",i+1,d);
    }
    return 0;
}

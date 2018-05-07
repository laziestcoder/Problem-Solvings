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
    int n,k=1,x;
    while(cin>>n && n)
    {
        int cn=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x)
                cn++;
            else
                cn--;
        }
        cout<<"Case "<<k++<<": "<<cn<<endl;
    }
    return 0;
}

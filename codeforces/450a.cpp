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
    long long int i=0,x,y,k=0,p=0;
    cin>>i;
    while(i--)
    {
        cin>>x>>y;
        if(x>0)
            k++;
        else
            p++;
    }
    if(k==1 || p==1 || p==0 || k==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    if(s[a-1]==s[b-1])
        cout<<"0"<<endl;
    else
        cout<<1<<endl;

    return 0;
}

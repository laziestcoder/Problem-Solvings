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
    int n,i,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(a+b>c && b+c>a && c+a>b)
            cout<<"OK";
        else
            cout<<"Wrong!!";
        cout<<endl;
    }
    return 0;
}

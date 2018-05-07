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
    long long int a1,a2,a3,b1,b2,b3,a=0,b=0;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    if(a1>b1 && a1!=b1)
        a++;
    else if(a1<b1 && a1!=b1)
        b++;
    if(a2>b2 && a2!=b2)
    a++;
    else if(a2<b2 && a2!=b2)
        b++;
    if(a3>b3 && a3!=b3)
        a++;
    else if(a3<b3 && a3!=b3)
        b++;
    cout<<a<<" "<<b<<endl;

}

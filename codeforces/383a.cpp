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

/*int mpow(int n)
{
    int a=1,i;
    for(i=1; i<=n; i++)
        a=1378*(a%10);
    return a;
}*/

int main ()
{
    int n;
    int a;
    cin>>n;
    if(n==0)
        cout<<1<<endl;
    else if(n%4==1)
        cout<<8<<endl;
        else if(n%4==2)
        cout<<4<<endl;
        else if(n%4==3)
        cout<<2<<endl;
        else if(n%4==0)
        cout<<6<<endl;

    return 0;
}

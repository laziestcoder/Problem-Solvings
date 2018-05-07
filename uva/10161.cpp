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
    int n;
    while(cin>>n && n)
    {
        int x,y,r,p;
        r=ceil(sqrt(n));
        x=y=r;
        p=r*r-r+1;
        //cout<<x<<y<<endl;
        //cout<<p<<endl;
        if(n>p)
        {
            y=y-(n-p);
            //cout<<y<<endl;
        }
        else
        {
            x=x-(p-n);
        }
        if(r%2!=0) swap(x,y);
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}

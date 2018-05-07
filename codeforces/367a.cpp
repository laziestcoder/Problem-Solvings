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
    int n, a,b;
    double d,mn=1e9;
    cin>>a>>b>>n;
    while(n--)
    {
        int x,y,v;
        cin>>x>>y>>v;
        x=abs(a-x);
        y=abs(b-y);
        d=x*x+y*y;
        d=sqrt(d);
        d=d/v;
        mn=min(d,mn);
    }
    printf("%.8lf\n",mn);
    return 0;

}

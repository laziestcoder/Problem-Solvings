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
    int i,t,x=0;
    double a=0,b=0;
    string c;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        cin>>a>>c;
        if( c.length() > 3 )
            {
                b=(int) (c[3] - '0');
            }
        else
                b=0;

        cout<<"Case "<<i<<": ";
            cout<< a*.5 + b*0.05 <<endl;

    }
    return 0;
}

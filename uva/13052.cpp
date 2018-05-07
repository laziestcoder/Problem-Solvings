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
    int i,t,a,b;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        double p=0,q=0;

        cin>>a>>b;
        if(a==0 && b==0)
        {
            p=0;
            q=0;
        }
        else if(b%2==0)
        {
            p=1;
            q=0;
        }
        else
        {
            p=0;
            q=1;
        }

        printf("Case %d: %.3lf %.3lf\n",i,p,q);

    }
    return 0;
}

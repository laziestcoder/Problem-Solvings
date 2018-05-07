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
#define ll long  long
int main ()
{
    ll int t,l,u,i;
    while(cin>>t && EOF)
    {
        while(t--)
        {
            cin>>l>>u;
            int j,mx=0,d=0,cn,p;
            for(i=l; i<=u; i++)
            {
                p=sqrt(i);
                cn=0;
                for(j=1; j<=p; j++)
                {
                    if(i%j==0)
                    {
                        cn++;
                        if(i/j != j)
                            cn++;
                    }

                }
                if(mx<cn)
                {
                    mx=cn;
                    d=i;
                }

            }
            cout<<"Between "<<l<<" and "<<u<<", "<<d<<" has a maximum of "<<mx<<" divisors."<<endl;
        }

    }

    return 0;
}

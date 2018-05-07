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
    int n,t;
    cin>>n>>t;
    int i,g=0,m=0;
    char s[n+2];
    for(i=0; i<n; i++)
    {
        cin>>s[i];

        if(s[i]=='G')
            g=i;
        if(s[i]=='T')
            m=i;
    }
   // cout<<m<<g<<endl;
    if(g>m)
    {
        for(i=g-t; i>=0; i-=t)
        {
            //  cout<<i<<endl;
            if(s[i]=='T')
            {
                cout<<"YES"<<endl;
                return 0;
            }

            if(s[i]=='#' || i<m)
            {
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }
    else
    {
        for(i=g+t; i<n; i+=t)
        {
            // cout<<i<<endl;
            if(s[i]=='T')
            {
                cout<<"YES"<<endl;
                return 0;
            }
            if(s[i]=='#' || i>m)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }

    }
    cout<<"NO"<<endl;
    return 0;
}

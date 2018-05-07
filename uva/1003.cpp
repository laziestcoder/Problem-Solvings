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
    int t,i,n;
    cin>>t;
    string a[10000],b[10000];
    for(i=1; i<=t; i++)
    {
        cin>>n;
        int j,k,f=0;
        for(j=0; j<n; j++)
        {
            cin>>a[j]>>b[j];
        }
        for(j=0; j<n; j++)
        {
            for(k=j; k<n; k++)
            {
                if(a[j]==b[k])
                {
                    if(a[k]==b[j])
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f)
            printf("Case %d: No\n",i);
        else
            printf("Case %d: Yes\n",i);
    }
    return 0;
}

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

    int m,n,s2[1000],ans,i,j,k,p;
    string s1[1000],d[10000];
    cin>>m>>n;
    for(i=0; i<m; i++)
        cin>>s1[i]>>s2[i];
    for(j=0; j<n; j++)
    {
        ans=0;
        for(k=0;; k++)
        {
            cin>>d[k];
            if(d[k][0]=='.')
                break;
        }
        for(p=0; p<k; p++)
        {
            for(i=0; i<m; i++)
            {
                if(s1[i]==d[p])
                    ans+=s2[i];
            }

        }
        cout<<ans<<endl;

    }
    return 0;

}

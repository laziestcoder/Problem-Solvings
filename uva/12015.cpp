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
    int t,i,j,n[10],max;
    char s[10][10000];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        max=0;
        for(j=0; j<10; j++)
        {
            cin>>s[j];
            cin>>n[j];
            if(n[j]>max)
                max=n[j];
        }
        cout<<"Case #"<<i<<":\n";
        for(j=0; j<10; j++)
        {
            if(n[j]==max)
            {
                cout<<s[j]<<endl;
            }
        }
    }
    return 0;
}

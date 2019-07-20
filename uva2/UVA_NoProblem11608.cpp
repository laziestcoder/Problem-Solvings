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
int main()
{
    int i,n,s,a[30],b[30],j=0,total=0;
    while(cin>>s)
    {
        if(s<0)
            break;
        for(i=1; i<=12; i++)
            cin>>a[i];
        for(i=0; i<12; i++)
            cin>>b[i];

        cout<<"Case "<<++j<<":"<<endl;

        for(i=0; i<12; i++)
        {

            if(s>=b[i])
            {
                cout<<"No problem! :D"<<endl;
                s-=b[i];
            }
            else
                cout<<"No problem. :("<<endl;
            s+=a[i+1];
        }

    }
    return 0;
}

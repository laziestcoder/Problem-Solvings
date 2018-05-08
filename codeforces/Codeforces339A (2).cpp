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
    long long l,r,k,ans=1,i;
    cin>>l>>r>>k;
        for(i=0;ans<=r;i++)
        {
            ans=pow(k,i);
            if(ans>=l && ans<=r)
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"-1"<<endl;
    return 0;
}

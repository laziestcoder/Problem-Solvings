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
    int t;
    cin>>t;
    while(t--)
    {
        int n,mxX=-1000,miX=1000,miY=1000,mxY=-1000;
        cin>>n;
        while(n--)
        {
            int x,y,p=4;
            while(p--)
            {
                cin>>x>>y;
                mxX=max(x,mxX);
                mxY=max(y,mxY);
                miX=min(x,miX);
                miY=min(y,miY);
            }

        }
        cout<<(mxX-miX)*(mxY-miY)<<endl;
    }
    return 0;
}

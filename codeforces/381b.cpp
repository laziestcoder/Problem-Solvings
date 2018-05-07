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
    int n,m,i,a[105];
    cin>>n>>m;
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    int ans=0;
    for(i=0; i <m; i++)
    {
        int j,c,b,s=0;
        cin>>c>>b;
        for(j=c-1; j<b;j++)
            s+=a[j];
        if(s>0)
        ans+=s;
    }
    cout<<ans<<endl;
    return 0;
}

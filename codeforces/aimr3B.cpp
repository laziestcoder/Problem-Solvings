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
int x[100005];
int main ()
{
    int n,i,a;
    cin>>n>>a;
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    sort(x,x+n);
    int s=0;
    for(i=0; i<n-1; i++)
        s+=min(abs(x[i]-a),abs(x[i+1]-a));
    cout<<s<<endl;
    return 0;
}

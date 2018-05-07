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
int a[100005];

int main ()
{
    map<long long int, long long int> mp;
    mp.clear();
    long long int n,x;
    cin>>n>>x;
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        mp[a[i]]++;
    }
    long long int c=0,d;
    for(i=0; i<n; i++)
    {
       c+=mp[a[i]^x];
    }
    if(x)
    cout<<c/2<<endl;
    else
        cout<<(c-n)/2<<endl;
    return 0;
}

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
int ni[100005];
int main ()
{
   // freopen("in.txt","r",stdin);
    int n;
    ni[0]=0;
    cin>>n;
    int i,x , mx=0,mi=0;
    for(i=0; i<=100000; i++)
    {
        ni[i]=0;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        ni[x]++;
        mx=max(mx,x);
    }
    for(i=1; i<=mx; i++)
    {
        ni[i]+=ni[i-1];
    }
    int m,ans;
    cin>>m;
    for(i=0; i <m; i++)
    {
        scanf("%d",&mi);
        ans=min(mi,mx);
        cout<<ni[ans]<<endl;
    }

    return 0;
}

/**
5
3 10 8 6 11
4
1
10
3
11

**/

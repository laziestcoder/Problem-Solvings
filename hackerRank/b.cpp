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
long long int dd(long long int n, long long int i)
{
    return (n-i);
}

int main ()
{
    queue<long long int> q;
    long long int n,i,a[200005],mn=1e16+1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
        if(i>0)
        {
            q.push(a[i]);
        }

    }
    int f=0;
    while(!q.empty())
    {
        for(i=n-q.size(); i<n-1; i++)
        {
            if(a[i]<q.front())
            {
                f=1;
                mn=min((q.front()-a[i]),mn);
            }

        }
        q.pop();
    }
    //if(f)
    cout<<mn<<endl;
   // else
   //     cout<<1<<endl;
    return 0;
}

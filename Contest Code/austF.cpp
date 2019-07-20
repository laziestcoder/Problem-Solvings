#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i,l,n,a[10010],b[1010];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int cn=0;
        cin>>n;
        for(l=1; l<=n; l++)
        cin>>a[l];
        for(l=1; l<=n; l++)
        cin>>b[l];
        for(l=1; l<=n; l++)
        {
            if(a[l]!=b[l])
                cn++;
        }
        cout<<"Case "<<i<<": "<<cn<<endl;
    }

    return 0;
}

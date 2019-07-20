#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,a[105],i,j,cn=0;
    scanf("%d %d",&n,&k);
    for(i=0; i<n ; i++)
        cin>>a[i];

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k == 0)
                cn++;
        }
    }
    cout<<cn<<endl;
    return 0;
}

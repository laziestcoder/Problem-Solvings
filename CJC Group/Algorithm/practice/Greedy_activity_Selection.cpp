#include<bits/stdc++.h>
using namespace std;
int n,a[100],s[100],f[100];
int GrActivitySelector()
{
    int i;
    memset(a,0,sizeof(a));
    /*for(i=1;i<=n;i++)
    {
        cout<<a[i];
    }*/
    int m,k=0;
    for(m=1; m<=n; m++)
    {
        if(s[m]>=f[k])
        {
            a[m]=1;
            k=m;
        }
    }
}
int main()
{
    int i;
    cout<<"how many options:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>f[i];
    }
    GrActivitySelector();
    cout<<"\nSelected activities: ";
    for(i=1; i<=n; i++)
    {
        if(a[i]==1)
        {
            cout<<"a"<<i<<" ";
        }
    }
    return 0;
}

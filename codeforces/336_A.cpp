#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int sum,n,s,f[1005]={0},t[1005]={0},x,y,i,j,pt;
    cin>> n>> s;
    for(i=0; i<=1005; i++)
    {
        f[i]=0;
        t[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        cin>> x>> y;
        f[x]=1;
        t[x]=y;
    }
    sum=0;
    pt=0;
    for(j=s; j>0; j--)
    {
        if(f[j]==1)
        {
            pt=t[j]-sum;
            if(pt>=0)
                sum+=pt+1;
            else
                sum++;
        }
        else
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum,sum2,j,i,t,k;
    int x[1005];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        sum=0;
        sum2=0;
        for(j=0;j<n; j++)
        {
            cin>>x[j];
        }

        sort(x+0,x+j);
        for(k=0;k<m;k++)
        {
            sum=sum+x[k];
        }
        for(k=0;k<m;k++)
            {
                sum2=sum2+x[j-1];
                j--;
            }

        cout<<"Case "<<i<<": "<<sum2<<" "<<sum<<endl;
    }

    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,i,n,m,c=0,j,k;
    cin>>t;
    for(i=1; i<=t;i++)
    {
        cin>>n>>m;
        c=0;
        for(j=1, k=1; ; )
        {
            if(j!= n && k!=m)
            {
                j++; k++;
                c++;
            }
            else if(j==n && k!=m)
            {
                k++;
                c++;
            }
            else if(k==m && j!=n)
            {
                j++;
                c++;
            }
                else if(j==n && k==m)
            {
                break;
            }

        }
        printf("Case %lld: %lld\n",i,c);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        long long int a[100005]= {0};
        for(i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        int d,tm=0,j;
        long long int mx=-1e16,sum=0;
        for(j=0; j<n ; j++)
        {
            d=0;
            tm=0;
            sum=0;
            for(i=j; i<n ;  i++)
            {
                if(a[i]<0)
                {
                    sum+=a[i]-d;
                    d=a[i];
                    if(sum=0)
                        tm=0;
                }
                else
                sum+=a[i];
            }
            sum-=d;
            if(mx<sum)
                {
                    mx=sum;
                }
        }
        cout<<mx<<endl;
    }
    return 0;
}

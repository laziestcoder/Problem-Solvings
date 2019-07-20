#include<bits/stdc++.h>
using namespace std;
int main ()
{
    map<int,int>m;
    int n;
    cin>>n;
    int a[n];
    int ans = 0;
    while(n--)
    {
        cin>>a[n];
        if(m[a[n]]==0)
        {
            m[a[n]]++;
            //cout<<a[n]<<endl;
        }
        else
        {
            int p=a[n]+1;

            while(true)
            {
                ans++;
                if(m[p]==0)
                {
                    m[p]++;
                   // cout<<p<<endl;
                    break;
                }
                p++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

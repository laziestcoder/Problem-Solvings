#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i,a[11],b,j;
    cin>>t;
    for(i=1; i<=t ; i++)
    {
        cin>>n;
        for(j=1; j<=n; j++)
        {
            cin>>a[j];
        }
        cout<<"Case "<<i<<": ";
            if(n%2==1)
            cout<<a[(n/2)+1]<<endl;

                else if(a[n/2]>a[(n/2)+1])
                    cout<<a[n/2]<<endl;
                    else
                    cout<<a[(n/2)+1]<<endl;

    }

    return 0;

}

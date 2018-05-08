#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int k,n;
        cin>>k>>n;
        printf("Case %d:\n",i);
        if(k==0)
        {
            cout<<n/3<<endl;
            n=n-(n/3);
            cout<<(2*n)/3<<endl;
            n=n-(2*n)/3;
            cout<<n<<endl;
        }
        else if(k==1)
        {
            int y,z,x;
            y=3*n;
            z=(3*y)/2;

            cout<<z/3<<endl;
            cout<<2*y/3<<endl;
            cout<<z<<endl;
        }
    }
    return 0;
}

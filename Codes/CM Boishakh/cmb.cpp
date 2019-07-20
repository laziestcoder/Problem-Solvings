#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,p,t,e;
    cin>>n;
    while(n--)
    {
        scanf("%lld%lld%lld",&p,&e,&t);
        if (p == 0)
            cout<<"Impossible"<<endl;
        else if( e==0 )
            cout<<0<<" Seconds"<<endl;
            else
                cout<<t<<" Seconds"<<endl;

    }
    return 0;

}

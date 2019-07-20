#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,t,cas=0;
    cin>>t;
    cas=0;
    while(t--)
    {
        scanf("%lld",&n);
        cout<<"Case "<<++cas<<": ";
        cout<<(3*(n-1)*n)+1<<" "<< n*n*n <<endl;
    }
    return 0;
}


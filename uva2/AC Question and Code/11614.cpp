#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=(-1+(sqrt(1+(8*n))))/2;
            cout<<n<<endl;
    }
    return 0;
}

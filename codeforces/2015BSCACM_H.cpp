#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    cout<<min(n,m)*(max(n,m)+1)<<endl;
    return 0;
}

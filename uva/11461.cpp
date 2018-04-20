#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    while(1)
    {
        cin>>n>>m;
        if( !n || !m )
            return 0;
        cout<<floor(sqrt(m))+1 - (ceil(sqrt(n)))<<endl;
    }
    return 0;
}

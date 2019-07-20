#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,h,sum=0;
    double a;
    while(1){
            cin>>n>>h;
            sum=0;
    while(n--)
    {
        cin>>a;
        sum+=ceil(a/h);
    }
    cout<<sum<<endl;
    }
    return 0;
}

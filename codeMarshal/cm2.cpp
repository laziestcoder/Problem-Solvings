#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,t;
    double x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x;
        x=((x/sqrt(2))*(x/sqrt(2)));
        printf("Land %lld: %.5lf\n",i,x);
    }
    return 0;
}

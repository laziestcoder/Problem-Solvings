
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,ans,check;
    cin>>a>>b>>c;
    if(a==b)
    {
        cout<<"YES\n";
    }
    else
    {


    if(c!=0)
    {
            ans=(b-a)/c+1;
            check=a+(ans-1)*c;
    }

    if(check==b&&ans>0)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

    }

    return 0;
}

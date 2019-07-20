#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    long long int b=0,a=0,p=0;
    cin>>n;
    while(1)
    {
        b=a;

        cin>>a;
        if(p>0)
        {
            cout<<b+a<<" ";

        }
            p++;
            if(p==n)
                break;
    }
    cout<<a<<endl;
    return 0;
}

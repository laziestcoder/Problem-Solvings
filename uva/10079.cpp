#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0)
            return 0;
        else
        {
            if( n%2 == 0)
                cout<<((n/2)*(n+1))+1<<endl;
            else
                cout<<(n*((n+1)/2))+1<<endl;

        }
    }
    return 0;
}

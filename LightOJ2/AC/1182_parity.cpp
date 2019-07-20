#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i=0;
    cin>> t;
    while(t--)
    {
        int sum=0;
        long long int n;
        cin>>n;
        while(n)
        {
            sum+=n%2;
            n=n/2;
        }
        cout<<"Case "<<++i<<": ";
        if(sum%2==0)
            cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
    }
    return 0;
}

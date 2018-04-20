#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n>=101)
        return n-10;
    else if(n<=100)
        return f(f(n+11));
}

int main ()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        else
            cout<<"f91("<<n<<") = "<<f(n)<<endl;
    }
    return 0;
}

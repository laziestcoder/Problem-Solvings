#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll int s;
ll int f(ll int n)
{
    s=s+(n%10);
    n=n/10;
    if(n>0)
     return f(n);
    else if(s>9)
     {
         n=s;
         s=0;
         return f(n);
     }
    return s;
}
int main ()
{
    ll int n,a,b;
    while(1)
    {
        cin>>n;
        s=0;
        if(n<=0)
            return 0;
        cout<< f(n) <<endl;
    }
    return 0;

}

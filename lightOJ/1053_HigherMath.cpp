#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,c;
    int t,i=0;
    cin>>t;
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        cout<<"Case "<<++i<<": ";
        if(a+b>c && b+c>a && c+a>b)
        {
            if(((a*a)==(b*b)+(c*c)) || ((b*b)==(c*c)+(a*a)) || ((c*c)==(a*a)+(b*b)))
                cout<<"yes\n";
            else
                cout<<"no\n";
        }
        else
            cout<<"no\n";

    }
    return 0;
}

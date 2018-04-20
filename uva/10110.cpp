#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        a=sqrt(n);
        b=a*a;
        if(b==n)
        printf("yes\n");
        else
        printf("no\n");
    }
    return(0);
}

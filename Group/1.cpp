#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int t;
    scanf("%d",&t);
    for(int cas=1; cas<=t; cas++)
    {
        long long int n;
        scanf("%lld",&n);
        if(n%2==0)
            printf("Case #%d: %lld %lld %lld\n",cas,(n*3),(n*3)-1,(n*3)-2);
        else
            printf("Case #%d: %lld %lld %lld\n",cas,(n*3)-2,(n*3)-1,(n*3));
    }
    return 0;
}

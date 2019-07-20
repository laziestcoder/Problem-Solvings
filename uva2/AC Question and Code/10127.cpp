#include<bits/stdc++.h>
using namespace std;

long long int digit(int n)
{
    long long int sum=0,i;
    for(i=1; sum<n ; i++)
    {
        sum=sum*10+1;
        if(sum%n == 0)
            return i;
        else
            sum=sum%n;
    }
    return i;
}

int main ()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n == 1)
            cout<<1<<endl;
        else
            cout<<digit(n)<<endl;
    }
    return 0;
}

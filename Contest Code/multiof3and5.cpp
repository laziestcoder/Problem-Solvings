#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int i,n,t;
    cin>>t;
    while(t--)
    {
        long long int sum=0,n1,n2,n3;
        cin>>n;
        n1=(n-1)/3;
        n2=(n-1)/5;
        n3=(n-1)/15;
        if(n1%2==0)
            sum+=(n1/2)*(n1+1)*3;
        else
            sum+=n1*((n1+1)/2)*3;

        if(n2%2==0)
            sum+=(n2/2)*(n2+1)*5;
        else
            sum+=n2*((n2+1)/2)*5;

        if(n3%2==0)
            sum=sum-(((n3/2)*(n3+1)*15));
        else
            sum=sum-((n3*((n3+1)/2)*15));
        cout<<sum<<endl;
    }
    return 0;
}

#include<iostream>
#include<bits/c++io.h>
#include<cstring>
#include<cstdlib>
#include <algorithm>
using namespace std;
int main ()
{
    int t,i;
    long long n[2*100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);

    }
    sort(n,n+t);



    for(i=t-1;  i>=0; i--)
        {

    printf("%d ",n[i]);

    }
    return 0;

}

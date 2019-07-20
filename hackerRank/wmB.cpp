#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    set< int > s;
    s.clear();
    int n,k,i,a[100005],j;
    scanf("%d%d",&n,&k);
    if(k==1)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int cn=0;
    for(i=0; i<n-1 ; i++)
    {
        for(j=i+1; j<n ; j++)
        {
            if(a[i]%k != a[j]%k )
                s.insert(i);
        }
    }
    cout<<s.size()<<endl;

    return 0;
}

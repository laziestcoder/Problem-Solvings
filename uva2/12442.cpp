#include<bits/stdc++.h>
using namespace std;
#define sz 50005;
vector< int > g[sz];

int main ()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int n;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            g[j].clear;
        }
        for(int j=0; j<n; j++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
        }
    }
    return 0;
}

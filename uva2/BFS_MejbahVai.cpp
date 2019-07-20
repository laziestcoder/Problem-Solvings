#include <bits/stdc++.h>
using namespace std;

#define SZ 100

vector <int> G[SZ];

void path( int *p, int d )
{
    if( d == -1 ) return;
    path(p,p[d]);
    cout << ' ' << d;
}

int bfs( int s, int d )
{
    int level[SZ] = {0};
    bool visited[SZ] = {0};
    int p[SZ];
    queue<int> Q;
    level[s] = 0;
    visited[s] = 1;
    Q.push(s);
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for( int i = 0; i < G[u].size(); i++ )
        {
            int v = G[u][i];
            if(!visited[v])
            {
                level[v] = level[u] + 1;
                visited[v] = 1;
                p[v] = u;
                Q.push(v);
            }
        }
    }
    return level[d];
}

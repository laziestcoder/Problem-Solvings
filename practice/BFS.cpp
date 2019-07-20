#include<bits/stdc++.h>
using namespace std;
queue<int>Q;
bool adj[100][100];
int V,E,r[100],d[100],color[100];
const int inf=9999999;
const int W=1,G=2,N=-1,B=3;///B-black,W-white,N-nil,G-gray
void Print_path(int s,int pv)
{
    if(pv==s)
        cout<<s;
    else if(r[pv]==N)
    {
        cout<<"No path from "<<s<<"to "<<pv<<"exists";
    }
    else
    {
        Print_path(s,r[pv]);
        cout<<pv;
    }
}
void mine_BFS(int s)
{
    int u,v;
    for(u=1;u<=V;u++)
    {
        color[u]=W;
        d[u]=inf;
        r[u]=N;
    }
    color[s]=G;
    d[s]=0;
    //r[s]=N;
    Q.push(s);
    while(Q.size()!=0)
    {
        u=Q.front();
        Q.pop();
        for(v=1;v<=V;v++)
        {
            if(color[v]==W && adj[u][v]==true)
            {
                color[v]=G;
                d[v]=d[u]+1;
                r[v]=u;
                Q.push(v);
            }
        }
        color[u]=B;
    }
}
int main()
{
    cout<<"Enter vertex and edge number:";
    cin>>V>>E;
    int u,v,i;
    cout<<"Enter connecting vertex:\n";
    for(i=1;i<=E;i++)
    {
        cin>>u>>v;
        adj[u][v]=true;
        adj[v][u]=true;
    }
    mine_BFS(1);
        printf("Vertex Number:\n");
    for (i = 1; i <= V; i++)
        printf("%4d", i);
    printf("\n");
    printf("Distance:\n");
    for (i = 1; i <= V; i++)
        printf("%4d", d[i]);
    printf("\n");
    printf("Parents:\n");
    for (i = 1; i <= V; i++)
        printf("%4d", r[i]);
    printf("\n");
    //for (i = 1; i <= V; i++)
    cout<<"Shortest path: ";
    Print_path(1,V);
    return 0;
}

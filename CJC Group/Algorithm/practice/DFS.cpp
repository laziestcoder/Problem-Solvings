#include<bits/stdc++.h>
using namespace std;
bool adj[100][100];
int V,E,r[100],d[100],f[100],color[100],time_;
const int inf=9999999;
const int W=1,G=2,N=-1,B=3;///B-black,W-white,N-nil,G-gray
int DFS_Visit(int u)
{
    time_=time_+1;
    d[u]=time_;
    color[u]=G;
    int v;
    for(v=1;v<=V;v++)
    {
        if(color[v]==W && adj[u][v]==true)
        {
            r[v]=u;
            DFS_Visit(v);
        }
    }
    color[u]=B;
    time_=time_+1;
    f[u]=time_;
}
int DFS()
{
    int u;
    for(u=1;u<=V;u++)
    {
        color[u]=W;
        r[u]=N;
    }
    time_=0;
    for(u=1;u<=V;u++)
    {
        if(color[u]==W)
            DFS_Visit(u);
    }
}
int main()
{
    cout<<"How many Vertex and edge:";
    cin>>V>>E;
    int i,u,v;
    cout<<"How they connected:\n";
    for(i=1;i<=E;i++)
    {
        cin>>u>>v;
        adj[u][v]=true;
        adj[v][u]=true;
    }
    DFS();
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
    printf("fdddd:\n");
    for (i = 1; i <= V; i++)
        printf("%4d", r[i]);
    cout<<"\n";
    return 0;
}

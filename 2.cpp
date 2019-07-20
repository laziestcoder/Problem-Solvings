#include<bits/stdc++.h>
using namespace std;
queue<int>q;
map<int,int>color;
int adj_mat[30][30]={0};
int n,m,vertex;
void init()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            adj_mat[i][j]=0;
        }
    }
}
void bfs(int source)
{
    color[source]=1;
    q.push(source);
    while(!q.empty())
    {
        vertex=q.front();
        cout<<vertex<<" ";
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(adj_mat[vertex][i]>0 && color[i]==0)
            {
                color[i]=1;
                q.push(i);
            }
        }
    }
}
int main()
{
    init();
    cout<<"enter the number of vertex = ";
    cin>>v;
    cout<<"Enter the number of edge ";
    cin>>e;
    for(int i=1;i<=e;i++)
    {
        cout<<"Enter the two connected Nodes \n";
        cin>>a>>b;
        cout<<"And their weight ";
        cin>>w;
        adj[a][b]=w;
    }
    bfs(1);




    return 0;
}

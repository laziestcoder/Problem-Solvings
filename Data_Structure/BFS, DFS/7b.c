/*
DFS recursive
*/

#include<stdio.h>

#define MAX 20
int adj[MAX][MAX], n, visit[25], stack[500], top;

void dfs(int x)
{
    int i;
    for(i=1;i<=n;i++)
        if(adj[x][i]==1&&visit[i]==0)
        {
            visit[i]=1;
            dfs(i);
        }
    printf("%d ",x);
}

int main()
{
    int max_edge, i, j, origin, destin;
    char graph_type;

    printf("enter the number of nodes : ");
    scanf("%d",&n);
    printf("enter the type of graph : ");
    fflush(stdin);
    scanf("%c",&graph_type);
    if(graph_type=='u')
        max_edge=n*(n-1)/2;
    else
        max_edge=n*(n-1);
    for(i=1;i<=max_edge;i++)
    {
        printf("enter edge %d\nenter(0,0) to quit : ",i);
	scanf("%d%d",&origin,&destin);
        if(origin==0&&destin==0)
            break;
        if(origin>n||destin>n||origin<=0||destin<=0)
        {
            printf("invalid edge");
            i--;
            continue;
        }
        adj[origin][destin]=1;
        if(graph_type=='u')
            adj[destin][origin]=1;
    }
    for(i=1;i<=n;i++)
        visit[i]=0;
    for(i=1;i<=n;i++)
    {
        if(visit[i]==0)
        {
            visit[i]=1;
            dfs(i);
        }
    }
    printf("\n");
    return 0;
}



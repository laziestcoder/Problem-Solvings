#include<stdio.h>
#define max 20

int adj[max][max];
int n;

int main()
{
    int max_edges, i, j, origin, destin;
    char graph_type;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter type of graph, directed or undirected (d/u) : ");
    fflush(stdin);
    scanf("%c", &graph_type);

    if (graph_type == 'u')
        max_edges = n * (n-1)/2;
    else
        max_edges = n * (n-1);

    for(i=1; i<=max_edges; i++)
    {
        printf("Enter edge %d( 0 0 to quit ) : ", i);
        scanf("%d %d", &origin, &destin);

        if((origin == 0) && (destin == 0))
            break;

        if(origin > n || destin > n || origin <= 0)
        {
            printf("Invalid edge!\n");
            i--;
        }
        else
        {
            adj[origin][destin] = 1;

            if(graph_type == 'u')
                adj[destin][origin] = 1;
        }
    }

    printf("The adjacency matrix is :\n");

    for(i=1; i<=n ; i++)
    {
        for(j=1; j<=n; j++)
            printf("%4d", adj[i][j]);

        printf("\n");
    }


    printf("\nThe adjacency List :\n");


    for(i=1; i<=n ; i++)
    {
        printf("%d : ", i);
        for(j=1; j<=n; j++)
        {
            if(adj[i][j]!=0)
                printf("%4d", j);
        }


        printf("\n");
    }



    return 0;
}

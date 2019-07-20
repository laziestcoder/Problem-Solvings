You see, I had a crazy time with this one. So no joke. I made my big mistake in designing the queue and finally used the STL.
Still, there are some really useful test cases I got. I corrected it later. It was in the empty verifier.
Input:

    1
    1 1
    25 0
    1 0
    1 1
    0 0
    5
    1 2 2 3 3 4 4 5 6 7
    1 0
    1 1
    1 2
    1 3
    1 4
    1 5
    1 6
    1 7
    0 0
    0

Output:

    Case 1: 0 nodes not reachable from node 25 with TTL = 0.
    Case 2: 0 nodes not reachable from node 1 with TTL = 0.
    Case 3: 0 nodes not reachable from node 1 with TTL = 1.
    Case 4: 6 nodes not reachable from node 1 with TTL = 0.
    Case 5: 5 nodes not reachable from node 1 with TTL = 1.
    Case 6: 4 nodes not reachable from node 1 with TTL = 2.
    Case 7: 3 nodes not reachable from node 1 with TTL = 3.
    Case 8: 2 nodes not reachable from node 1 with TTL = 4.
    Case 9: 2 nodes not reachable from node 1 with TTL = 5.
    Case 10: 2 nodes not reachable from node 1 with TTL = 6.
    Case 11: 2 nodes not reachable from node 1 with TTL = 7.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int q[100], front, rear, color[100], graph[100][100], g_depth,  v[100], d[100], n_edge;
void init_q() { front = 0; rear = 0; }
void insert_q(int val) { q[rear++]=val; }
int del_q() { return q[front++]; }
int q_empty() { return (front==rear); }

int BFS(int src) {
    int depth=1, count=0, i, u;
    init_q();
    insert_q(src);
    for (i=1 ; i<=33 ; i++) {
        color[i]=0;
        d[i]=-1;
    }
    d[src]=0;

    color[src]=1;

    while (!q_empty()) {
        u = del_q();

        for (i=1 ; i<=33 ; i++) {
            if (graph[u][i]==1 && color[i]==0) {
                color[i]=1;
                insert_q(i);
                d[i]=d[u]+1;
            }
        }

    }

    for (i=1 ; i<=33 ; i++) {
        if (d[i]>0 && d[i]<=g_depth) {
            count++;
        }
    }

    return count;
}

int main()  {
    int i, j, x, y, cases=1, node, p_x, p_y, k;
    while (scanf("%d",&n_edge)&& n_edge) {
        for (i=0 ; i<=33 ; i++) {
            v[i]=-1;
            for (j=0 ; j<=33 ; j++) {
                graph[i][j]=0;
            }
        }
        for (i=1, node=1 ; i<=n_edge ; i++) {
            scanf("%d %d",&x,&y);          /*----------Renaming method----------*/
            for (k=1, p_x=-1; k<node ; k++) {
                if (v[k]==x && p_x==-1) {
                    p_x=k;
                    break;
                }
            }
            if (p_x<0) {
                v[node++]=x;
                p_x=node-1;
            }
            for (k=1, p_y=-1 ; k<node ; k++) {
                if (v[k]==y && p_y==-1) {
                    p_y=k;
                    break;
                }
            }
            if (p_y<0) {
                v[node++]=y;
                p_y=node-1;
            }
            graph[p_x][p_y]=graph[p_y][p_x]=1;
            graph[p_x][p_x]=graph[p_y][p_y]=1;
        }
        while (scanf("%d %d",&x,&g_depth)) {
            if (!x && !g_depth)
                break;
            for (i=1 ; i<=33 ; i++) {
                if (v[i]==x) {
                    break;
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases++,node-BFS(i)-2,x,g_depth);
        }
    }
    return 0;
}

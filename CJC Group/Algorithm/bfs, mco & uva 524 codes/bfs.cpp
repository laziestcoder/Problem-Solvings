#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

const int INF = 100000;
const int MAX = 100;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
const int NIL = -1;

int V, E;
bool adj[MAX][MAX];

int color[MAX];
int d[MAX];
int p[MAX];

queue<int> Q;

void BFS(int s) {
    int u, v;
    for (u = 1; u <= V; u++) {
        color[u] = WHITE;
        d[u] = INF;
        p[u] = NIL;
    }
    color[s] = GRAY;
    d[s] = 0;
    Q.push(s);

    while(!Q.empty()) {
        u = Q.front();
        Q.pop();
        for (v = 1; v <= V; v++) {
            if (adj[u][v] == true && color[v] == WHITE) {
                color[v] = GRAY;
                d[v] = d[u] + 1;
                p[v] = u;
                Q.push(v);
            }
        }
        color[u] = BLACK;
    }
}

int main() {
    int i, u, v;

freopen("bfsin.txt", "r", stdin);

    scanf("%d%d", &V, &E);
    for (i = 1; i <= E; i++) {
        scanf("%d%d", &u, &v);
        adj[u][v] = true;
        adj[v][u] = true;
    }

    BFS(1);

    printf("V: ");
    for (i = 1; i <= V; i++)
        printf("%4d", i);
    printf("\n");
    printf("d: ");
    for (i = 1; i <= V; i++)
        printf("%4d", d[i]);
    printf("\n");
    printf("p: ");
    for (i = 1; i <= V; i++)
        printf("%4d", p[i]);
    printf("\n");
}

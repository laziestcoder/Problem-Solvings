Method:

Algorithm used: Kruskal's MST
Complexity: n^2
Comments: I used structures to store edge & vertex information
For using qsort() you need to modify the cmp function as mine, or something
else that means the same.

Sample Input:

7

4
6.99999999999 0.99999999999999
6.99999999999 0.99999999999999
6.99999999999 -0.99999999999999
-6.99999999999 0.99999999999999

1
0.0 0.1

3
1.0 1.0
2.0 -2.0
2.0 4.0

4
1.0 1.0
2.0 2.0
2.0 4.0
-3.0 9.0

3
1.0 1.0
2.0 2.0
2.0 4.0

4
1.0 1.0
-2.0 -2.0
2.0 -4.0
3.0 9.0

5
0.0 0.0
0.0 -0.0
0.0 -0.0
-0.0 0.0
0.0 0.0

Sample Output:

16.00

0.00

6.32

10.49

3.41

16.96

0.00

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10100
int rank[MAX], p[MAX];
char blank[MAX];

struct point {
    double x, y;
} V[MAX]={0.0,0.0};

struct edge {
    int u, v;
    double w;
} A[MAX]={0,0,0.0}, E[MAX]={0,0,0.0};

int cmp(const void *a, const void *b) {
    /*return (((struct edge*)a)->w - ((struct edge*)b)->w);*/
    if (((struct edge*)a)->w > ((struct edge*)b)->w) return 1;
    else if (((struct edge*)a)->w < ((struct edge*)b)->w) return -1;
    else return 0;
}

double dis(int u, int v) {
    return sqrt(pow(V[u].x-V[v].x,2.0)+pow(V[u].y-V[v].y,2.0));
}

void make_set(int x) {
    p[x]=x;
    rank[x]=0;
}

int find_set(int x) {
    if (x!=p[x]) {
        p[x]=find_set(p[x]);
    }
    return p[x];
}

void link(int x, int y) {
    if (rank[x]>rank[y]) {
        p[y]=x;
    } else {
        p[x]=y;
        if (rank[x]==rank[y]) {
            rank[y]=rank[y]+1;
        }
    }
}

void uni(int x, int y) {
    link(find_set(x),find_set(y));
}

int kruskal(int num_vertex, int num_edge) {

    int idx_A=0, i;

    for (i=0 ; i<num_vertex ; i++) {
        make_set(i);
    }

    qsort(E,num_edge,sizeof(struct edge),cmp);

    for (i=0, idx_A=0 ; i<num_edge ; i++) {
        if (find_set(E[i].u)!=find_set(E[i].v)) {
            A[idx_A++]=E[i];
            uni(E[i].u,E[i].v);
        }
    }

    return idx_A;

}


int input(int num_vertex) {

    int i;

    for (i=0 ; i<num_vertex ; i++) {
        scanf("%lf %lf",&V[i].x,&V[i].y);
    }

    return num_vertex;
}

int edgify(int num_vertex) {

    int i, j, k;

    for (i=0, k=0 ; i<num_vertex ; i++) {
        for (j=0 ; j<num_vertex ; j++) {
            E[k].u = i;
            E[k].v = j;
            E[k].w = dis(i,j);
            k++;
        }
    }

    return k;

}


int main() {

    int i, num_vertex, test, blanker=1;
    double sum;

    scanf("%d",&test);
    getchar();

    while (test--) {

        gets(blank);

        scanf("%d",&num_vertex);
        getchar();

        sum = 0.0;

            int num_edge = edgify(input(num_vertex));

            int tree_count = kruskal(num_vertex,num_edge);

            for (i=0; i<tree_count ; i++) {
                sum = sum + A[i].w;
            }
            if (blanker++>1) putchar('\n');
            printf("%.2lf\n",sum);
    }

    return 0;
}

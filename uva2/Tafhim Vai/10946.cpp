Befoe anyone tries to straightaway put their beloved DFS() function in it, it’s Flood Fill. I honestly didn’t have a clue why. But the only logical thing seems to be that checking all 8 blocks is a waste when if there’s a hole right at the corner it will be detected if one just above/below it exists. Anyway, if anyone has a better reason, please do tell me.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct r {
    char c;
    int val;
} res[100000]={0,0};
int x, y, color[100][100], d[100][100], f[100][100], p[100][100];
unsigned char graph[100][100];
int visit(int ux, int uy, unsigned char col) {
    int visited=1;
    if (color[ux][uy])
        return 0;
    color[ux][uy]=1;
    if (graph[ux-1][uy]==col) visited+=visit(ux-1,uy,col);
    if (graph[ux][uy-1]==col) visited+=visit(ux,uy-1,col);
    if (graph[ux][uy+1]==col) visited+=visit(ux,uy+1,col);
    if (graph[ux+1][uy]==col) visited+=visit(ux+1,uy,col);
    return visited;
}

int DFS() {
    int i, j, k=0;
    /*------------Initialization phase starts------------*/
    for (i=0 ; i<=x ; i++) {
        for (j=0 ; j<=y ; j++) {
            color[i][j]=0;
            d[i][j]=99999;
            f[i][j]=99999;
            p[i][j]=-1;
        }
    }
    /*-----------Initialization phase ends----------------*/

    for (i=1 ; i<=x ; i++) {
        for (j=1 ; j<=y ; j++) {
            if (color[i][j]==0 && graph[i][j]!='.') {
                res[k].c=graph[i][j];
                res[k].val=0;
                res[k].val+=visit(i,j,graph[i][j]);
                k++;
            }
        }
    }
    return k;

}

int cmp(const void *a, const void *b) {
    if (((struct r*)a)->val==((struct r*)b)->val)
        return (((struct r*)a)->c-((struct r*)b)->c);
    else
        return (((struct r*)b)->val-((struct r*)a)->val);
}

int main() {
    int i, j, k, prob=1;
    while (scanf("%d %d",&x,&y)!=EOF) {
        getchar();
        if (!x && !y) break; /*--End of input--*/
        for (i=1 ; i<=x ; i++) {
            for (j=1 ; j<=y ; j++) {
                graph[i][j]=getchar();
            }
            getchar();
        }

        k=DFS();
        qsort(res,k,sizeof(struct r),cmp);
        printf("Problem %d:\n",prob++);
        for (i=0 ; i<k ; i++) {
            printf("%c %d\n",res[i].c,res[i].val);
        }
    }
    return 0;

}

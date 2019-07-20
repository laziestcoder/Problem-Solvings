Method:

Wasn't much hard as I was told already that it was minimax problem.
Used the Maximin algorithm

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double st[300][2];
double min(double a, double b) {
    if (a>b) return a;
    else return b;
}
double max(double a, double b) {
    if (a<b) return a;
    else return b;
}
double w[300][300], d[300][300];


int main() {
    int i, j, k, n, sc=1;

    while (scanf("%d",&n)!=EOF && n) {
        scanf("%lf %lf",&st[1][0],&st[1][1]);
        scanf("%lf %lf",&st[n][0],&st[n][1]);
        for (i=2 ; i<n ; i++) {
            scanf("%lf %lf",&st[i][0],&st[i][1]);
        }

        for (i=1 ; i<=n ; i++) {
            for (j=1 ; j<=n ; j++) {
                d[i][j]=w[i][j]=(double)sqrt((double)pow(st[i][0]-st[j][0],2)+(double)pow(st[i][1]-st[j][1],2));
            }
            d[i][i]=0.000;
        }

        for (k=1 ; k<=n ; k++) {
            for (i=1 ; i<=n ; i++) {
                for (j=1 ; j<=n ; j++) {
                    d[i][j] = max(d[i][j], min(d[i][k], d[k][j]));
                }
            }
        }
        printf("Scenario #%d\nFrog Distance = %.3lf\n\n",sc++,d[1][n]);
    }
    return 0;
}

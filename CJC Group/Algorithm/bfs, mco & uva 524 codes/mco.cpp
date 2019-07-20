#include <cstdio>

using namespace std;

const int INF = 100000;

int m[100][100], s[100][100];
int p[100] = {30, 35, 15, 5, 10, 20, 25};
int n = 6;


void matrix_chain_order() {
    int i, j, k, l;
    int q;
    for (i = 1; i <= n; i++)
        m[i][i] = 0;
    for (l = 2; l <= n; l++) {
        for (i = 1; i <= n-l+1; i++) {
            j = i+l-1;
            m[i][j] = INF;
            for (k = i; k < j; k++) {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}

void print_optimal_parens(int i, int j) {
    if (i == j)
        printf("A%d", i);
    else {
        printf("(");
        print_optimal_parens(i, s[i][j]);
        print_optimal_parens(s[i][j]+1, j);
        printf(")");
    }
}

int main() {
    matrix_chain_order();
    printf("%d\n", m[1][n]);
    print_optimal_parens(1, n);
    printf("\n");
}

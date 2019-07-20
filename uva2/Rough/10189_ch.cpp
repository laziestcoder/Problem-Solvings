#include<cstdio>
#include<cstring>

using namespace std;

int a, b;
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
char input[110];
char grid[110][110];

void incr(int r, int c) {
    for(int i = 0; i < 8; i++)
        if(r + x[i] >= 0 && r + x[i] < a
                && c + y[i] >= 0 && c + y[i] < b
                && grid[r + x[i]][c + y[i]] != '*')
            grid[r + x[i]][c + y[i]]++;
}

int main() {
    for(int t = 1;; t++) {
        scanf("%d %d\n", &a, &b);
        if(a == 0 && b == 0) break;

        if(t > 1) printf("\n");
        for(int i = 0; i < a; i++) {
            gets(input);
            strcpy(grid[i], input);
        }
        for(int i = 0; i < a; i++)
            for(int j = 0; j < b; j++)
                if(grid[i][j] == '.')
                    grid[i][j] = '0';
        for(int i = 0; i < a; i++)
            for(int j = 0; j < b; j++)
                if(grid[i][j] == '*')
                    incr(i, j);
        printf("Field #%d:\n", t);
        for(int i = 0; i < a; i++)
            printf("%s\n", grid[i]);
    }
}

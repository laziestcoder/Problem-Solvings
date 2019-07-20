/**
Just brute-force through the matrix and you’re done. Using an array for the directions to move
in will decrease the amount of coding significantly.
***/

#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

char INPUT[102][102];

int search(int I, int J, char *Q, int *LI, int *LJ) {

    int X_D[9] = { 0, -1, -1, -1, 0, 1, 1,  1};
    int Y_D[9] = {-1, -1,  0,  1, 1, 1, 0, -1};
    int X, Y, T, S;

    for (T=0 ; T<8 ; T++) {
        for (X=I, Y=J, S=0 ; Q[S]!='' ; S++) {
            if (INPUT[X][Y]!=Q[S]) {
                break;
            } else {
                X+=X_D[T];
                Y+=Y_D[T];
            }
        }
        if (Q[S]=='') {
            *LI = X-X_D[T];
            *LJ = Y-Y_D[T];
            return 1;
        }
    }
    return 0;
}

int main() {
    int L, I, J, LI, LJ, FOUND;
    char Q[102];

    scanf("%d",&L);
    for (I=0 ; I<L ; I++) {
        scanf("%s",INPUT[I]);
    }
    while(scanf("%s",Q)==1) {
        if (!strcmp(Q,"0"))
            break;

        for (I=0, FOUND=0 ; I<L && !FOUND ; I++) {
            for (J=0 ; J<L ; J++) {
                if(INPUT[I][J]==Q[0]) {
                    if (search(I,J,Q,&LI,&LJ)) {
                        printf("%d,%d %d,%d\n",I+1, J+1, LI+1, LJ+1);
                        FOUND = 1;
                        break;
                    }
                }
            }
        }
        if (!FOUND)
            printf("Not found\n");
    }
    return 0;
}

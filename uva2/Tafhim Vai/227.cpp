#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char BOARD[7][7];
char STEPS[1000];
int main() {

    int COUNT=1, I, J, X, Y, K;

    while (1) {

        for (X=0 ; X<5 ; X++) {
            for (Y=0 ; Y<5 ; Y++) {
                BOARD[X][Y] = getchar();
                if (BOARD[X][Y]=='Z') {
                    exit(0);
                } else if (BOARD[X][Y]==' ') {
                    I=X;
                    J=Y;
                }
            }
            getchar();
        }
        if (COUNT>1) putchar('\n');
        printf("Puzzle #%d:\n",COUNT++);

        strcpy(STEPS,"");
        while (1) {
            gets(&STEPS[strlen(STEPS)]);
            if (STEPS[strlen(STEPS)-1]=='0')
                break;
        }

        for (K=0 ; STEPS[K]!='0' ; K++) {
            if (STEPS[K]=='A') {
                if (I-1>=0) {
                    BOARD[I][J]=BOARD[I-1][J];
                    BOARD[I-1][J]=' ';
                    I--;
                } else {
                    break;
                }
            } else if (STEPS[K]=='B') {
                if (I+1<5) {
                    BOARD[I][J]=BOARD[I+1][J];
                    BOARD[I+1][J]=' ';
                    I++;
                } else {
                    break;
                }
            } else if (STEPS[K]=='L') {
                if (J-1>=0) {
                    BOARD[I][J]=BOARD[I][J-1];
                    BOARD[I][J-1]=' ';
                    J--;
                } else {
                    break;
                }
            } else if (STEPS[K]=='R') {
                if (J+1<5) {
                    BOARD[I][J]=BOARD[I][J+1];
                    BOARD[I][J+1]=' ';
                    J++;
                } else {
                    break;
                }
            }
        }

        if (STEPS[K]!='0') {
            printf("This puzzle has no final configuration.\n");
        } else {
            for (I=0 ; I<5 ; I++) {
                for (J=0 ; J<5 ; J++) {
                    putchar(BOARD[I][J]);
                    if (J<4) {
                        putchar(' ');
                    }
                }
                putchar('\n');
            }
        }
    }

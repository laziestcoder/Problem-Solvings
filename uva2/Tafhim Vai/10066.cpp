/**
Algorithms Used: Longest Common Subsequence
**/
#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

int C[102][102];
int main() {
    int A[102], B[102], I, J, ONE, TWO, MAX, CASES=1;
    while (scanf("%d %d",&ONE, &TWO)==2 && ONE && TWO) {
        for (I=0 ; I<ONE ; I++) {
            scanf("%d",&A[I]);
        }
        for (I=0 ; I<TWO ; I++) {
            scanf("%d",&B[I]);
        }
        if (TWO>=ONE) MAX = TWO;
        else MAX = ONE;
        for (I=0 ; I<MAX ; I++) {
            C[0][I] = C[I][0] = 0;
        }
        for (I=1 ; I<=ONE ; I++) {
            for (J=1 ; J<=TWO ; J++) {
                if (A[I-1] == B[J-1]) {
                    C[I][J] = C[I-1][J-1] + 1;
                } else if (C[I-1][J]>=C[I][J-1]) {
                    C[I][J] = C[I-1][J];
                } else {
                    C[I][J] = C[I][J-1];
                }
            }
        }
        printf("Twin Towers #%d\nNumber of Tiles : ",CASES++);
        printf("%d\n\n",C[I-1][J-1]);
    }
    return 0;
}

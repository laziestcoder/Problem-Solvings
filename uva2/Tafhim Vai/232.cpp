/***
First of all, the Problem Description is wrong. The limit is not 10. It’s 100 above.
I tried a lot of things including wrong ideas about the output (numbering part).
Explicitly check if the block you’re processing starts the word, even though the primary condition of “white” holds.

****/
#include <stdio.h>

char CW[1000][1000];
char ACC[1000][1000];
char DOW[1000][1000];
int D_LIST[1000], A_LIST[1000];
int NUM[1000][1000];

int main() {

    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/

    int I, J, A, D, K, X, Y, CON, COUNTER=1;
    while (scanf("%d",&X)==1) {

        if (X==0) break;
        if (COUNTER>1) printf("\n");
        printf("puzzle #%d:\n",COUNTER++);

        scanf("%d",&Y);
        getchar();

        for (I=0 ; I<X ; I++) {
            gets(CW[I]);
        }
        /*for (I=0 ; I<=X ; I++) {
            CW[I][0]=CW[0][I]='*';
        }*/
        A = D = 0;
        CON = 0;

        for (I=0 ; I<X ; I++) {
            for (J=0 ; J<Y ; J++) {
                if (CW[I][J]!='*' && (!I || !J || CW[I-1][J]=='*' || CW[I][J-1]=='*')) {
                    NUM[I][J] = ++CON;
                    if (!J | CW[I][J-1]=='*') {
                        for (K=J ; K<Y && CW[I][K]!='*' ; K++) {
                            ACC[A][K-J]=CW[I][K];
                        }
                        ACC[A][K-J]='';
                        A_LIST[A]=NUM[I][J];
                        A++;
                    }
                    if (!I || CW[I-1][J]=='*') {
                        for (K=I ; K<X && CW[K][J]!='*' ; K++) {
                            DOW[D][K-I]=CW[K][J];
                        }
                        DOW[D][K-I]='';
                        D_LIST[D]=NUM[I][J];
                        D++;
                    }
                }
            }
        }
            printf("Across\n");
            for (I=0 ; I<A ; I++) {
                printf("%3d.%s\n",A_LIST[I],ACC[I]);
            }
            printf("Down\n");
            for (I=0 ; I<D ; I++) {
                printf("%3d.%s\n",D_LIST[I],DOW[I]);
            }
    }
    return 0;
}

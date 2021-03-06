Used algorithm: Counting Sort
Just count how many times an age appeared.


    Loop (i = 1 -> 100) {
     if (table[i] has some value) {
      Show i for that amount of times.
     }
    }

If anybody knows some better algorithm or Input/Output method for faster performance please contact.


#include <stdio.h>
int main() {

    int I, N, J, AGE, maxAGE, PPL[101]={0};

    while (scanf("%d",&N) && N!=0) {
        maxAGE = 0;
        for (I=0 ; I<N ; I++) {
            scanf("%d",&AGE);
            if (AGE>maxAGE)
                maxAGE = AGE;
            PPL[AGE]++;
        }
        for (I=0 ; I<101 ; I++) {
            if (PPL[I])
            for (J=0 ; J<PPL[I] ; J++) {
                if (I==maxAGE && J==PPL[I]-1) printf("%d\n",I);
                else printf("%d ",I);
            }
            PPL[I] = 0;
        }
    }

    return 0;
}


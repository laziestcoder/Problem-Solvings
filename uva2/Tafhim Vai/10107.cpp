/**
Algorithms used: Insertion Sort
I think with C++ maps this can be solved with a better runtime.
**/

#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
    long int IN, R, I;
    int C=1;
    list[0]=-9999;
    while (scanf("%ld",&IN)!=EOF) {
        for (I=C++ ; IN<list[I-1] ; I--) {
            list[I]=list[I-1];
        }
        list[I] = IN;

        if (C%2) {
            R = (long int)(( list[(int)C/2] + list[(int)C/2 + 1] )/2);
        } else {
            R = (long int)list[(int)C/2];
        }
        printf("%ld\n",R);
    }
    return 0;
}

/*
 * UVa 119: Greedy gift givers
 * Sai Cheemalapati
 *
 */

#include <cstdio>
#include <cstring>

int index(char* name, char names[10][16]) {
    int i = 0;
    while (strcmp(name, names[i]) != 0)
        i++;

    return i;
}

int main() {
    int N, T = 0;
    char names[10][16];
    int net[10];

    while (scanf("%d\n", &N) == 1) {
        if (T > 0) printf("\n"); // Space in-between groups.
        T++;

        for (int i = 0; i < N; i++) {
            scanf("%s ", names[i]);
            net[i] = 0;
        }

        // Gift amount; Number of gift givees.
        int G, M;
        char name[16];
        for (int n = 0; n < N; n++) {
            scanf("%s %d %d ", name, &G, &M);
            // Add the modulus (leftover money from the giver).
            net[index(name, names)] -= G - (M == 0? G : G % M);
            for (int i = 0; i < M; i++) {
                scanf("%s ", name);
                net[index(name, names)] += G / M;
            }
        }
        for (int i = 0; i < N; i++) {
            printf("%s %d\n", names[i], net[i]);
        }
    }
}

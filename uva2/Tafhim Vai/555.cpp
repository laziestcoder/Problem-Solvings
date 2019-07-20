/****
Well this seems to be a crazy code but it actually gave me a 5th rank.

***/
#include <stdio.h>
#include <string.h>

char chk[14] = "23456789TJQKA";

typedef struct pl {
    bool C[100]; //-------|
    bool D[100];        //|For recording which
    bool S[100];        //|cards does he have
    bool H[100]; //-------|
} player;

char STR[10], DEAL1[100], DEAL2[100];

/*------------------------------
    TEAM[P%4] Gets the team member
    .C .D .S .H are the four Suits
    .X[DEAL[I+1]] set that card
--------------------------------*/

int main() {
    int I, P;
    while (gets(STR)) {
        if (!strcmp(STR,"#"))
            break;
        else if (!strcmp(STR,"N"))
            P = 1;
        else if (!strcmp(STR,"E"))
            P = 2;
        else if (!strcmp(STR,"S"))
            P = 3;
        else
            P = 4;
        gets(DEAL1);
        gets(DEAL2);

        player TEAM[5]={false,false,false,false};
        for (P, I=0 ; DEAL1[I]!='' ; I+=2) {
            if (DEAL1[I]=='C') {
                TEAM[P++%4].C[DEAL1[I+1]] = true;
            }
            else if (DEAL1[I]=='D') {
                TEAM[P++%4].D[DEAL1[I+1]] = true;
            }
            else if (DEAL1[I]=='S') {
                TEAM[P++%4].S[DEAL1[I+1]] = true;
            }
            else if (DEAL1[I]=='H') {
                TEAM[P++%4].H[DEAL1[I+1]] = true;
            }

        }
        for (P, I=0 ; DEAL2[I]!='' ; I+=2) {
            if (DEAL2[I]=='C') {
                TEAM[P++%4].C[DEAL2[I+1]] = true;
            }
            else if (DEAL2[I]=='D') {
                TEAM[P++%4].D[DEAL2[I+1]] = true;
            }
            else if (DEAL2[I]=='S') {
                TEAM[P++%4].S[DEAL2[I+1]] = true;
            }
            else if (DEAL2[I]=='H') {
                TEAM[P++%4].H[DEAL2[I+1]] = true;
            }

        }

        for (P=2 ; P<6 ; P++) {
            if (P == 2) {
                printf("S:");
            } else if (P == 3) {
                printf("W:");
            } else if (P == 4) {
                printf("N:");
            } else {
                printf("E:");
            }
            for (I=0 ; I<14 ; I++) {
                if (TEAM[P%4].C[chk[I]]) {
                    printf(" C%c",chk[I]);
                }
            }
            for (I=0 ; I<14 ; I++) {
                if (TEAM[P%4].D[chk[I]]) {
                    printf(" D%c",chk[I]);
                }
            }
            for (I=0 ; I<14 ; I++) {
                if (TEAM[P%4].S[chk[I]]) {
                    printf(" S%c",chk[I]);
                }
            }
            for (I=0 ; I<14 ; I++) {
                if (TEAM[P%4].H[chk[I]]) {
                    printf(" H%c",chk[I]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

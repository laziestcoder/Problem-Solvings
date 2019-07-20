#include <iostream>
#include <cstdio>
#define MAXC 2600
#define REPR(i, a, b) for(i=b ; i>=a ; i--)
#define REP(i, a, b) for(i=a ; i<b ; i++)
using namespace std;

char pow[20][160][MAXC]={0};
char mls[20][160][MAXC]={0};
char fin[20][160][MAXC]={0};
int RES[MAXC];
char RES2[MAXC];
int NUM, POW;
char NUMS[1023];
char IPOW[100];



int strpow(char *num, char *ml) {
    int SP1 = strlen(num) - 1;
    int SP2 = strlen(ml) - 1;
    int SP3 = 0 ;
    int I, J, K, CUR, CAR;

    REPR(I, 0, SP1) {
        for (K=SP3, J=SP2, CAR=0 ; J>=0 ; J--, K++) {
            CUR = ((num[I]-'0')*(ml[J]-'0')) + RES[K] + CAR;
            CAR = 0;
            if (CUR>9) {
                CAR = CUR/10;
                CUR = CUR%10;
            } else {
                CAR = 0;
            }
            RES[K]=CUR;
        }
        if (CAR!=0) RES[K]=CAR;
        SP3++;
    }

    while (RES[K]==0) K--;

    for (I=0, K ; K>=0 ; K--, I++) {
        pow[NUM][POW][I] = RES[K]+'0';
        RES[K] = 0;
    }
    if (I==0) {
        pow[NUM][POW][I++]='0';
    }
    pow[NUM][POW][I]='';

    return 0;
}

int strmls(char *num, char *ml) {
    int SP1 = strlen(num) - 1;
    int SP2 = strlen(ml) - 1;
    int SP3 = 0 ;
    int I, J, K, CUR, CAR;

    REPR(I, 0, SP1) {
        for (K=SP3, J=SP2, CAR=0 ; J>=0 ; J--, K++) {
            CUR = ((num[I]-'0')*(ml[J]-'0')) + RES[K] + CAR;
            CAR = 0;
            if (CUR>9) {
                CAR = CUR/10;
                CUR = CUR%10;
            } else {
                CAR = 0;
            }
            RES[K]=CUR;
        }
        if (CAR!=0) RES[K]=CAR;
        SP3++;
    }

    while (RES[K]==0) K--;

    for (I=0, K ; K>=0 ; K--, I++) {
        mls[NUM][POW][I] = RES[K]+'0';
        RES[K] = 0;
    }
    if (I==0) {
        mls[NUM][POW][I++]='0';
    }
    mls[NUM][POW][I]='';

    return 0;
}

int stradd(char *NUM1, char *NUM2) {
    int LN_1 = strlen(NUM1);
    int LN_2 = strlen(NUM2);
    int TEMP, CAR, CUR, I, J, K;
    char num1[MAXC], num2[MAXC];

    strcpy(num1,NUM1);
    strcpy(num2,NUM2);

    if (LN_2 > LN_1) { /*-------Swap routine incase of the reverse------*/
        TEMP = LN_2;
        LN_2 = LN_1;
        LN_1 = TEMP;
        strcpy(RES2, num1);
        strcpy(num1, num2);
        strcpy(num2, RES2);
    }

    for (I=LN_1, CAR=0, J=LN_2, CAR=0, K=0 ; I>0 ; I--, J--, K++) {
        CUR = (num1[I-1]-'0') + (J<1?0:num2[J-1]-'0') + CAR;
        CAR = 0;
        if (CUR>9) {
            CAR = 1;
            CUR = CUR%10;
        } else {
            CAR = 0;
        }
        RES2[K] = CUR + '0';
    }
    if (CAR) RES2[K++] = CAR + '0';

    for (--K, I=0 ; K>=0 ; K--, I++) {
        fin[NUM][POW][I] = RES2[K];
    }
    fin[NUM][POW][I] = '';

    return 0;
}

int main() {

    int I, N, A;
    NUM = 1;
    POW = 1;
    for (I=0 ; I<160 ; I++) {
        strcpy(pow[1][I],"1");
        strcpy(pow[0][I],"0");
    }
    REP(NUM, 1, 20) {
        sprintf(NUMS,"%d",NUM);
        strcpy(pow[NUM][0],"0");
        strcpy(pow[NUM][1],NUMS);
        strcpy(mls[NUM][1],NUMS);
        strcpy(fin[NUM][1],NUMS);

        REP(POW, 2, 160) {
            strpow(pow[NUM][POW-1],NUMS);
            sprintf(IPOW,"%d",POW);
            strmls(pow[NUM][POW],IPOW);
            stradd(fin[NUM][POW-1],mls[NUM][POW]);
        }
    }

    while (scanf("%d %d",&N,&A)!=EOF) {
        if (N==0 || A==0) printf("0\n");
        else printf("%s\n",fin[A][N]);
    }
    return 0;
}

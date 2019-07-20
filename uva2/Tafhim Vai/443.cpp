This solution uses a simple DP. Keeps a mark on the numbers that are generating the smooths. Then checks for the highest and sets it is the next. A slight modification will solve the 136th Problem, namely ugly numbers.


#include <iostream>
#define LIMIT 5842
#define INTH (long long)1e100


int main() {

    long long num[5]={2,3,5,7}, deg[5]={0};
    long long ugly[LIMIT]={1}, i, j, cur;
    char numq[10], print[10]; int numenq;

    for (i=0 ; i<=LIMIT ; i++) ugly[i]=1;
    for (i=0 ; i<4 ; i++) deg[i]=0;


    for (i=1 ; i<LIMIT ; i++) {

        cur=INTH;

        for (j=0 ; j<4 ; j++) {
            if (cur>ugly[deg[j]]*num[j])
                cur=ugly[deg[j]]*num[j];
        }

        ugly[i]=cur;

        for (j=0 ; j<4 ; j++) {
            if (cur == (ugly[deg[j]]*num[j]))
                deg[j]++;
        }

    }

    while (scanf("%s",numq)==1) {

        numenq=atoi(numq);

        if (numenq==0) break;

        if (numq[strlen(numq)-1]=='1'&&numq[strlen(numq)-2]!='1') strcpy(print,"st");
        else if (numq[strlen(numq)-1]=='2'&&numq[strlen(numq)-2]!='1') strcpy(print,"nd");
        else if (numq[strlen(numq)-1]=='3'&&numq[strlen(numq)-2]!='1') strcpy(print,"rd");
        else strcpy(print,"th");

        printf("The %d%s humble number is %lld.\n",numenq,print,ugly[numenq-1]);
    }

    return 0;

}

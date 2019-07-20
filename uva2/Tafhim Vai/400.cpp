/***
Absolutely nothing too hard. I made a mistake in reading the specification. Rightmost column’s width will be equal to the longest filename. What if the file’s name is 60 character long? I solved it using a simple if. But there are much better calculations that can rectify that.
***/
#include<bits/stdc++.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

struct dat {

    char str[70];
    int len;

} input[110]={0,0};

int cmp(const void *a, const void *b) {
    return strcmp (((struct dat*)a)->str,((struct dat*)b)->str);
}

int main() {

    int i, j, k, wCount, cLen, maxLen, divPer, divInt, divSeg, pPoint, cPoint, pCount;

    /*freopen("400_in.txt","r",stdin);
    freopen("400_out.txt","w",stdout);*/

    while (scanf("%d",&wCount)!=EOF) {

        getchar();

        for (i=0, maxLen=-1 ; i<wCount ; i++) {
            gets(input[i].str);
            cLen = input[i].len = strlen(input[i].str);
            if (cLen>maxLen) {
                maxLen=cLen;
            }
        }

        divSeg = maxLen+2;
        divPer = 60/divSeg;
        if (divPer<1) {
            divPer=1;
            divSeg-=2;
        }
        divInt = (int) ceil((double)wCount/(double)divPer);
        qsort(input,wCount,sizeof(struct dat),cmp);

        printf("------------------------------------------------------------\n");
        for (j=0, pPoint=0, pCount=1 ; j<divInt ; j++, pPoint++) {
            for (i=0, cPoint=pPoint ; i<divPer && cPoint<wCount ; i++, cPoint+=divInt) {
                printf("%s",input[cPoint].str);
                pCount++;
                    for (k=input[cPoint].len ; k<divSeg ; k++) {
                        putchar(' ');
                    }
            }
            printf("\n");
        }
    }

    return 0;

}

Everything is given, even the conditions. Just do it the way it’s given. Use a structure for the Irregular words and be careful on the 3rd case that’s all.


#include <stdio.h>
#define REP(i, a, b) for (i=a ; i<b ; i++)
typedef struct ir {
    char word[100], rep[100];
} irr;

irr words[25]={0,0};

int check(char ch[]) {
    if (ch[1]=='o' || ch[1]=='s' || ch[1]=='x') return 1;
    if (!strcmp(ch,"ch") || !strcmp(ch,"sh")) return 1;
    return 0;
}

int main() {
    int L, N, I, J, K, LEN, FOUND;
    char ch[3], input[25];

    scanf("%d %d",&L,&N);

    REP(I, 0, L) {
        scanf("%s %s",words[I].word, words[I].rep);
    }

    REP(I, 0, N) {
        scanf("%s",input);
        FOUND = 0;
        REP(J, 0, L) {
            if (!strcmp(input,words[J].word)) {
                printf("%s\n",words[J].rep);
                FOUND = 1;
            }
        }
        if (!FOUND) {
            LEN = strlen(input);
            ch[0]=input[LEN-2];
            ch[1]=input[LEN-1];
            ch[2]='';

            if (ch[0]!='a' && ch[0]!='e' && ch[0]!='i' && ch[0]!='o' && ch[0]!='u' && ch[1]=='y') {
                REP(K, 0, LEN-1) {
                    putchar(input[K]);
                }
                printf("ies\n");
            } else if (check(ch)) {
                printf("%ses\n",input);
            } else {
                printf("%ss\n",input);
            }
        }

    }

    return 0;
}

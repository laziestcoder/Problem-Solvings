Not too simple, yet fun to solve. For the very first time a problem that made me think about building my own input routines. But not yet, I just processed them a lil’ bit that’s all. I think a smarter code could generate a lot better run time and a lot better ranking though.


#include <stdio.h>
#include <string.h>
int count[100];
char coll[100][100];

int stlen(char in[]) {
    int i, count=0;
    for (i=0 ; in[i]!='' ; i++) {
        if ((in[i]>='a'&&in[i]<='z') || (in[i]>='A'&&in[i]<='Z'))
            count++;
    }
    return count;
}

int pro(char in[]) {
    int w=0, j=0, i;

    for (i=0 ; in[i]!='' ; i++, j++) {
        if (in[i]=='?' || in[i]=='!' || in[i]==',' || in[i]=='.') {
            coll[w][j]='';
            w++; j=-1;
        } else {
            coll[w][j]=in[i];
        }

    }
    if (j<0) {
        j++;
    }
    coll[w][j]='';

    return w;
}

int main() {

    char input[100], tmp[100];
    int i, j;
    strcpy(tmp,"");

    while (scanf("%s",input)==1) {
        /*---If the end of input is - ---*/
        if (input[strlen(input)-1]=='-') {
            strcpy(tmp,input);
            continue;
        }

        if (!strcmp(input,"#")) {
            for (i=1 ; i<100 ; i++) {
                if (count[i]) {
                    printf("%d %d\n",i,count[i]);
                }
                count[i]=0;
            }
            printf("\n");
            continue;
        }

        if (strlen(tmp)) {
            /*printf("SEND: %s%s\n",tmp,input);*/
            for (i=strlen(tmp), j=0 ; input[j]!='' ; j++, i++) {
                tmp[i]=input[j];
            }
            tmp[i]='';
            j=pro(tmp);
            for (i=0 ; i<=j ; i++) {
                count[stlen(coll[i])]++;
            }
            strcpy(tmp,"");
        } else {
            /*printf("SEND: %s\n",input);*/
            j=pro(input);
            for (i=0 ; i<=j ; i++) {
                count[stlen(coll[i])]++;
            }
        }

    }
    return 0;
}

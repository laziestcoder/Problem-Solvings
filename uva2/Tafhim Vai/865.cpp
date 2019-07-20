All you need is a table, and because it’s such a small limit of possible letters, all you need is a hardly 150-200 sized array in which you can directly map the letters rather than search for them. Helps you access them in 0(1).


#include <stdio.h>
#include <stdlib.h>

char tab[10000];

int main() {

    char demo[100], ch, input[1000], plain[200];
    int i, t;

    scanf("%d",&t);
    getchar();
    gets(demo);

    while (t--) {

        for (i=0 ; i<200 ; i++) {
            tab[i]=0;
        }

        gets(plain);

        i=0;
        while ((ch=getchar())!='\n') {
            tab[plain[i++]] = ch;
            putchar(ch);
        }
        putchar('\n');
        puts(plain);

        while (gets(input)) {
            if (!strcmp(input,""))
                break;
            else {
                for (i=0 ; input[i]!='' ; i++) {
                    if (tab[input[i]])
                        putchar(tab[input[i]]);
                    else
                        putchar(input[i]);
                }
            }
            printf("\n");
        }

        if (t) printf("\n");


    }

    return 0;

}

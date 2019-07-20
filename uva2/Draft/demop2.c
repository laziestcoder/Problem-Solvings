#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char l[]="1 -2 10000 -50 20 7 445 avc";
    char *p, *e;
    long i;
    int c=0;
    for(p=l; ; p=e)
    {
        i=strtol(p, &e,0);
        printf("= %ld ",i);
        if(p==e)
        {
            break;
        }
        c++;
    }
    printf("%d",c);
    return 0;
}

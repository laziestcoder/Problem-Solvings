#include<stdio.h>
int main()
{
    char sen[100];
    int count=0;
    gets(sen);
    count=strlen(sen);
    printf("%d\n",count);
    return 0;
}

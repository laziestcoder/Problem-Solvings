#include<stdio.h>
int main()
{
    int i,count;
    char str[100];
    gets(str);
    count=strlen(str);

    for(i=count-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}

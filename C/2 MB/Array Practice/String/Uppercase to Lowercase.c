#include<stdio.h>
int main()
{
    int i;
    char str[20];
    gets(str);

    for(i=0;str[i]!='\0';i++)
        str[i]=tolower(str[i]);

    printf("%s",str);

    return 0;
}

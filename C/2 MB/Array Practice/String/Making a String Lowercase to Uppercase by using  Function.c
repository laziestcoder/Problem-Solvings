#include<stdio.h>
#include<ctype.h>
void upper(char *p)
{
    int i;
    for(i=0;p[i]!='\0';i++)
    p[i]=toupper(p[i]);
}
int main()
{
    char str[80];
    gets(str);
    upper(&str[0]);
    printf("%s",str);

    return 0;
}


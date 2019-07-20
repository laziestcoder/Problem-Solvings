#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[80],*p;
    gets(str);

    for(p=str;*p!='\0';p++)
        *p=tolower(*p);
    printf("%s",str);

    return 0;
}

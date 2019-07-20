#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[80],*p;
    gets(str);
    p=str;
    while(*p!='\0')
    {
        *p=tolower(*p);
        p++;
    }
    printf("%s\n",str);

    return 0;
}

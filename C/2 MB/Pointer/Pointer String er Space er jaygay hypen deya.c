#include<stdio.h>
int main()
{
    char str[80],*p;
    gets(str);
    p=str;

    while(*p!='\0')
    {
        if(*p==' ')
            *p='-';
        p++;
    }
    printf("%s",str);

    return 0;
}

#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[80],*p;
    int i,vcount=0,ccount=0;
    gets(str);
    p=str;

    while(*p!='\0')
    {
        *p=tolower(*p);
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
        {
            vcount++;
            p++;
        }
        else
        {
            ccount++;
            p++;
        }
    }
    printf("%d %d",vcount,ccount);

    return 0;
}

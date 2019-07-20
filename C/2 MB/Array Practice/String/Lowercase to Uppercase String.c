#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[80];
    int i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=toupper(str[i]);
    }
    printf("%s",str);

    return 0;
}

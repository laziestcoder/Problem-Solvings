#include<stdio.h>
void cap(char *p)
{
    int i,count=0;
    for(i=0;p[i]!='\0';i++)
        if(p[i]=='A')
            count++;
    printf("%d",count);
}
int main()
{
    char str[80];
    gets(str);
    cap(&str[0]);
    return 0;
}


#include<stdio.h>
int main()
{
    char a[30],b[30];
    int i;
    gets(a);
    gets(b);
    for(i=0;b[i]!='\0';i++)
        a[i]=b[i];
        a[i]='\0';
    printf("%s %s",a,b);
    return 0;
}

#include<stdio.h>
int main()
{
    int i;
    char a[100];
    gets(a);
    for(i=0;a[i]!='\0';i++)
        printf("%c=%d\n",a[i],a[i]);

    return 0;
}

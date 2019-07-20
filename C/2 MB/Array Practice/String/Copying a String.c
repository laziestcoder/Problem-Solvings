#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);

    strcpy(a,b);
    printf("%s\n",a);
    printf("%s",b);

    return 0;
}

#include<stdio.h>
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);

    strcat(a,b);

    printf("%s\n",a);
    printf("%s",b);

    return 0;
}

#include<stdio.h>
int main()
{
    char a[100],b[100],temp[100];
    gets(a);
    gets(b);
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);

    printf("%s\n",a);
    printf("%s",b);

    return 0;
}

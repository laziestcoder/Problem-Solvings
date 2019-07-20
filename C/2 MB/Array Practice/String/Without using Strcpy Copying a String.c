#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i;
    gets(a);
    gets(b);

    for(i=0;b[i]!='\0';i++)
    {
        a[i]=b[i];
    }
    a[i]='\0';
    printf("%s\n",a);
    printf("%s",b);

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int f;
    char a[100],b[100];
    gets(a);
    gets(b);

    f=strcmp(a,b);
    if(f==0)
        printf("Equal");
    else if(f>0)
        printf("a is greater than b");
    else if(f<0)
        printf("a is smaller than b");

    return 0;
}

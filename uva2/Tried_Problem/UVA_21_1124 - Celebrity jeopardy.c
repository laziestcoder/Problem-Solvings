#include<stdio.h>

int main()
{
    char str[1000];
    while(gets(str))
    {
        puts(str);
        //printf("%s\n",str);
    }
    return 0;
}

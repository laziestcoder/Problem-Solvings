#include<stdio.h>
int main ()
{
    char ch='w';
    if (ch>='a' && ch<='w')
    {
        printf("%c is lower case\n",ch);
    }
    else
    {
        printf("%c is upper case\n",ch);
    }
    getch();
    return 0;
}

/*
tower of hanoi
*/

#include<stdio.h>

int count;

void tower(n,beg,aux,end)
{
    if(n==1)
        printf("%d.%c->%c\n",++count,beg,end);
    else
    {
        tower(n-1,beg,end,aux);
        printf("%d.%c->%c\n",++count,beg,end);
        tower(n-1,aux,beg,end);
    }
}

int main()
{
    char beg='a', aux='b', end='c';
    int n;
    scanf("%d",&n);
    tower(n,beg,aux,end);
    return 0;
}

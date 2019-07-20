// Tower of Hanoi
#include<stdio.h>

void tower(n,beg,aux,end)
{
    if(n==1)
        beg = end;
    else
    {
        tower(n-1,beg,end,aux);
        beg = end;
        tower(n-1,beg,end,aux);
    }
}

int main()
{
    int top = 0;
    if(n==1)
        beg = top;
    top = top + 1;
    stn[top] = n;
    stbeg[top] = beg;
    staux[top] = aux
    stdend[top] = end;
    stadd[top] = 3;
    n = n - 1;
    beg = beg;
    aux = end;
    end = aux;
    beg = end;
    top = top + 1;
    stn[top] = n;
    stbeg[top] = beg;
    staux[]
    return 0;
}

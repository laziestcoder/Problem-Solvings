// Quick Sort
#include<stdio.h>

int quick(a,n,beg,end,loc)
{
    int left,right;
    left = beg;
    right = end;
    loc = beg;
    while(a[loc]<=a[right] && loc != right)
        right = right - 1;
    if(loc == right)
        break;
}

int main()
{
    int a[100],upper[100],lower[100],beg,end,n,i,k,ptr,temp;
    int top = 0;
    if(n>1)
    {
        top = top + 1;
        lower[1] = 1;
        upper[1] = n;
    }
    while(top != 0)
    {
        beg = lower[top];
        end = upper[top];
        top = top - 1;
        Call quick;
        if(beg<loc-1)
        {
            top = top - 1;
            lower[top] = beg;
            upper[top] = loc - 1;
        }
        if(loc + 1<end)
        {
            top = top + 1;
            lower[top] = loc + 1;
            upper[top] = end;
        }
    }

    return 0;
}


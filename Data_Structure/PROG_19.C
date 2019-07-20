// Algo: 6.1, 6.2, Stack Push Pop
#include<stdio.h>
#include<stdlib.h>
#define Max 15

void push(int newstack[], int *top, int val)
{
    if(*top < Max)
    {
        *top = *top + 1;
        newstack[*top] = val;
    }
    else
    {
        printf("No value can be pushed as stack is full\n");
        exit(0);
    }
}

void pop(int newstack[], int *top, int *val)
{
    if(*top >= 0)
    {
        *val = newstack[*top];
        *top = *top - 1;
    }
    else
    {
        printf("No value can be popped as a stack is empty\n");
        exit(0);
    }
}

int main()
{
    int newstack[Max];
    int top = -1;
    int n,val;
    do
    {
        do
        {
            printf("The element to be pushed is\n");
            scanf("%d",&val);
            push(newstack,&top,val);
            printf("To continue enter 1\n");
            scanf("%d",&n);
        }while(n == 1);
        printf("To pop an element enter 1\n");
        scanf("%d",&n);
        while(n == 1)
        {
            pop(newstack,&top,&val);
            printf("The value popped is %d\n",val);
            printf("To pop an element enter 1\n");
            scanf("%d",&n);
        }
        printf("To continue enter 1\n");
        scanf("%d",&n);
    }while(n == 1);
}

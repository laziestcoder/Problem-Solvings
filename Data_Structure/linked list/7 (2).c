/*
linked list search
*/

#include<stdio.h>
#include<stdlib.h>

#define NULL 0

struct linked_list
{
    int num;
    struct linked_list *next;
};

typedef struct linked_list node;

int main()
{
    int n, i, item, count=0, f=0;
    node *start, *ptr, *loc;
    printf("how many data : ");
    scanf("%d",&n);
    printf("insert %d data : ",n);
    start=(node *)malloc(sizeof(node));
    ptr=start;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ptr->num);
        if(i!=n)
        {
            ptr->next=(node *)malloc(sizeof(node));
            ptr=ptr->next;
        }
        else
            ptr->next = NULL;
    }

    printf("input what to search : ");
    scanf("%d",&item);
    ptr=start;
    while(ptr!=NULL)
    {
        count++;
        if(item==ptr->num)
        {
            loc=ptr;
            f=1;
            n=count;
            break;
        }
        else
            ptr=ptr->next;
    }
    if(f)
        printf("%d found in position %d and address %x\n",item,n,loc);
    else
        printf("item not found\n");

    return 0;
}

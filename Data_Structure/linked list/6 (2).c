/*
linked list traversing
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
    int n, i;
    node *start, *ptr;
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
    ptr=start;
    printf("diplaying items : ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
    printf("\n");
    return 0;
}


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
    ptr=start; // ptr is like temp
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ptr->num); // value of the node
        if(i!=n) // i!=number of node
        {
            ptr->next=(node *)malloc(sizeof(node)); // link of next node
            ptr=ptr->next; // as like ptr=(*ptr).next, next node
        }
        else // when i==number of node
            ptr->next = NULL; // as like(*ptr).next=NULL
    }
    ptr=start; // this point to head node
    printf("displaying items : ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
    printf("\n");
    return 0;
}


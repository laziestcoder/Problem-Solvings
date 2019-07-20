/*
two way linked list
*/

#include<stdio.h>
#include<stdlib.h>

struct two_way_linked_list
{
    int num;
    struct two_way_linked_list *prev;
    struct two_way_linked_list *next;
};

typedef struct two_way_linked_list node;

int main()
{
    node *start, *ptr, *end, *save, *p, *q;
    int i, n, x;
    printf("input size : ");
    scanf("%d",&n);
    printf("input %d itegers : ",n);
    start=(node *)malloc(sizeof(node));
    ptr=start;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ptr->num);
        if(i==1)
            ptr->prev=NULL;
        else
            ptr->prev=save;
        if(i==n)
        {
            ptr->next=NULL;
            end=ptr;
        }
        else
        {
            ptr->next=(node *)malloc(sizeof(node *));
            save=ptr;
            ptr=ptr->next;
        }
    }
    printf("displaying linked list from start to end : \n");
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
    printf("\n");
    printf("displaying linked list from end to start : \n");
    ptr=end;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->prev;
    }
    printf("\n");
    printf("input a node number : ");
    scanf("%d",&x);
    ptr=start;
    for(i=1;i<=n;i++)
    {
        if(i==x)
        {
            printf("in node %d : ",x);
            printf("%d\n",ptr->num);
            p=ptr->next;
            if(p==NULL)
                printf("%d is the last node\n",x);
            else
            {
                printf("in node %d : ",x+1);
                printf("%d\n",p->num);
            }
            q=ptr->prev;
            if(q==NULL)
                printf("%d is the first node\n",x);
            else
            {
                printf("in node %d : ",x-1);
                printf("%d\n",q->num);
            }
            break;
        }
        ptr=ptr->next;
    }
    if(i>n)
        printf("%d node does not exist\n",x);
    return 0;
}

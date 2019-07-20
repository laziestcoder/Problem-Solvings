/*
inserting in a sorted linked list
*/

#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
    int num;
    struct node *next;
};

typedef struct linked_list node;

int main()
{
    node *start, *ptr, *temp, *save, *loc;
    int i, n, item;
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
    printf("what to insert : ");
    scanf("%d",&item);
    if(item<start->num)
    {
        temp=(node *)malloc(sizeof(node));
        temp->num=item;
        temp->next=start;
        start=temp;
    }
    else
    {
        save=start;
        ptr=start->next;
        while(ptr!=NULL)
        {
            if(item<ptr->num)
            {
                loc=save;
                break;
            }
            save=ptr;
            ptr=ptr->next;
        }
        loc=save;
        temp=(node *)malloc(sizeof(node *));
        temp->num=item;
        temp->next=loc->next;
        loc->next=temp;
    }
    n++;
    ptr=start;
    for(i=1;i<=n;i++)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
    return 0;
}

/*
deleting from a linked list
*/

#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
    int num;
    struct linked_list *next;
};

typedef struct linked_list node;

int main()
{
    node *start, *ptr, *temp, *loc, *locp, *save;
    int i, n, item, found=0;
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
    temp=(node *)malloc(sizeof(node));
    temp->num=item;
    printf("what to delete : ");
    scanf("%d",&item);
    if(start->num==item)
    {
        loc=start;
        locp=NULL;
    }
    else
    {
        save=start;
        ptr=start->next;
        while(ptr!=NULL)
        {
            if(item==ptr->num)
            {
                loc=ptr;
                locp=save;
                found=1;
                break;
            }
            save=ptr;
            ptr=ptr->next;
        }
        if(!found)
            loc=NULL;
    }
    if(loc==NULL)
        printf("item not in the list\n");
    else
    {
        if(locp==NULL)
            start=start->next;

        else
            locp->next=loc->next;
        ptr=start;
        printf("after deleting : ");
        n--;
        for(i=1;i<=n;i++)
        {
            printf("%d ",ptr->num);
            ptr=ptr->next;
        }
        printf("\n");
    }
    return 0;
}

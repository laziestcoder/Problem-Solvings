/*
circular header linked list
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
    int n, i, count=0;
    node *start, *ptr, *header;
    printf("how many data : ");
    scanf("%d",&n);
    printf("insert %d data : ",n);
    start=(node *)malloc(sizeof(node));
    ptr=start;
    header->num=n;
    header->next=start;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ptr->num);
        if(i!=n)
        {
            ptr->next=(node *)malloc(sizeof(node));
            ptr=ptr->next;
        }
        else
            ptr->next=start;
    }
    ptr=start->next;
    printf("diplaying items : ");
    while(count!=n)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
        count++;
    }
    printf("\n");
    printf("in header node : %d\n",header->num);
    return 0;
}



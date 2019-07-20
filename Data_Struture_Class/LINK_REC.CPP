#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void addNode(struct node* link);
void printList(struct node* head);

struct node
{
    int x;
    struct node* next;
};

int main()
{
    struct node* head;
    head = (struct node*)malloc(sizeof(struct node));
    addNode(head);
    printList(head);
    free(head);
    //getch();

    return 0;
}

void addNode(struct node* link)
{
    printf("\n Enter a value[-1 for exit]");
    scanf("%d",&link->x);
    if(link->x==-1)
        link->next=NULL;
    else
    {
        link->next = (struct node*)malloc(sizeof(struct node));
        addNode(link->next);
    }

}

void printList(struct node* head)
{
    struct node* localHead;
    localHead = head;
    printf("\n Elements are : head");
    while(NULL!=localHead->next)
    {
        printf("->%d",localHead->x);
        localHead=localHead->next;
    }
}

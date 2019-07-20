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
    //clrscr();
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
    int n;
    struct node* tail=link;
    printf("Enter a value[-1 for exit]");
    scanf("%d",&tail->x);

 //Now create list with iteration.
    for(n=1;(tail->x)!=-1;n++)
    {
        tail->next=(struct node*)malloc(sizeof(struct node));
        tail=tail->next;
        printf("\nEnter a value[-1 for exit]:");
        scanf("%d",&tail->x);
    }
    tail->next=NULL;
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

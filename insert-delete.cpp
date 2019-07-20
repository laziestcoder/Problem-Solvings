#include<stdio.h>
#include<conio.h>
void show()
{
    int i,rear,queue[20];
    printf("\n queue:");
    for(i=1;i<=rear;i++)
    printf("%d",queue[i]);
}
void qinsert()
{
    int n,maxqueue=n,rear,item,queue[20];
    printf("enter the item");
    scanf("%d",&item);
    if(rear=maxqueue)
    {
        printf("overflow");
    }
    else{rear=rear+1;
    queue[rear]=item;}
    show();
}
void qdelete()
{
    int front,queue[20],item;
    if(front==0)
    {printf("underflow\n");}
    else
    {item=queue[front];
    printf("item deleted %d\n",item);
    front=front+1;
    }
    void show();
    }
    printf("enter a choice");
    scanf("%d",&choice);
    while(choice<1|| choice>3);
    return 0;


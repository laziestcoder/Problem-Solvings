/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
#define size 10

int queue[size+1];
int rear=0,front=0,item;
void qinsert(int x)
{
    if(((front==1) && (rear==size))||(front==rear+1))
    {
        printf("OVERFLOW");
        return;
    }
    if(front==0)
    {
        front=1;
        rear=1;
    }
    else
    {
        rear=rear+1;
        if(rear>size)
            rear=1;
    }
    queue[rear]=x;
}
void qdelet()
{
    int i;
    if(front==0)
    {
        printf("UNDERFLOW\n");
        return;
    }
    item=queue[front];
    if(front==rear)
    {
        front=0;
        rear=0;
    }
    else if(front==size)
        front=1;
    else
        front=front+1;
}
void show()
{
    int i;
    printf("\nQueue is: ");
    if(front==0)
    {
        printf("empty\n");
        return ;
    }
    if(front<=rear)
    {
        for(i=front; i<=rear; i++)
            printf("%d ",queue[i]);
    }
    else
    {
        for(i=front; i<=size; i++)
            printf("%d ",queue[i]);
        for(i=1; i<=rear; i++)
            printf("%d ",queue[i]);
    }
    printf("\n");
}
void main()
{
    int x,choice;
    while(1)
    {
        printf("Select your chice:\n");
        printf("(1)Insert\n");
        printf("(2)Delete\n");
        printf("(3)Exit.\n");
        printf("Enter your choice.\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    printf("Enter an element\n");
                    scanf("%d",&x);
                    qinsert(x);
                    show();
                    break;
            case 2:
                    qdelet();
                    show();
                    break;
            case 3:
                    exit(0);
        }
    }
}

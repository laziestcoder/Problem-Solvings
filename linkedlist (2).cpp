/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct linked_list
{
    int num;
    struct linked_list *next;
};
typedef struct linked_list node;
main()
{
    int n,ch;
    node *start, *ptr;
    start=(node *) malloc(sizeof(node));
    ptr=start;
    while(1)
    {
        printf("input a number");
        scanf("%d",&ptr->num);
        printf("again?(1/0)");
        scanf("%d",&ch);
        if(ch==0)
        {
            ptr->next=NULL;
            break;
        }
        ptr->next=(node *)malloc(sizeof(node));
        ptr=ptr->next;
    }
    ptr=start;
    while(ptr!=NULL)
    getch();
    return 0;
}


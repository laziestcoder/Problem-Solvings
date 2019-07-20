/*
BST search
*/

#include<stdio.h>
#include<stdlib.h>

struct nodeptr
{
    int info;
    struct nodeptr *left;
    struct nodeptr *right;
};

typedef struct nodeptr node;
node *root, *loc, *par;

void insertnode(int item)
{
    node *p, *back, *newnode;
    newnode=(node *)malloc(sizeof(node));
    newnode->info=item;
    newnode->left=NULL;
    newnode->right=NULL;
    back=NULL;
    p=root;
    while(p!=NULL)
    {
        back=p;
        if(p->info>item)
            p=p->left;
        else
            p=p->right;
    }
    if(back==NULL)
        root=newnode;
    else if(back->info>item)
        back->left=newnode;
    else
	back->right=newnode;
}

void search(int item)
{
    node *ptr, *save;
    if(root==NULL)
        loc=par=NULL;
    else if(root->info==item)
    {
        loc=root;
        par=NULL;
    }
    else
    {
        save=root;
        if(item<root->info)
            ptr=root->left;
        else
            ptr=root->right;
        while(ptr!=NULL)
        {
            if(item==ptr->info)
            {
                loc=ptr;
                par=save;
                break;
            }
            else if(item>ptr->info)
            {
                save=ptr;
                ptr=ptr->right;
            }
            else
            {
                save=ptr;
                ptr=ptr->left;
            }
        }
        loc=ptr;
        par=save;
    }
}

int menu(void)
{
    int n;
    do
    {
        printf("press 1 for insert\n");
        printf("press 2 for search\n");
        printf("press 3 for exit\n");
        printf("your choice : ");
	scanf("%d",&n);
    }while(n<1||n>3);
    return n;
}

int main()
{
    int choice, x;
    do
    {
        choice=menu();
        switch(choice)
        {
            case 1: printf("insert item : ");
                    scanf("%d",&x);
                    insertnode(x);
                    break;
            case 2: printf("what to search : ");
                    scanf("%d",&x);
                    search(x);
                    if(loc==NULL&&par==NULL)
                        printf("BST is empty\n");
                    else if(par==NULL&&loc!=NULL)
                        printf("%d is at root\n",x);
                    else if(par!=NULL&&loc==NULL)
                        printf("%d is not in the BST\n",x);
                    else
                        printf("%d is location %x\n",x,loc);
                    break;
            case 3: printf("exit\n");
                    break;
        }
    }while(choice!=3);
    return 0;
}

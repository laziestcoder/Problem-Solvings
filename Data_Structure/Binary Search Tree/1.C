/*
BST insert and traversing
*/

#include<stdio.h>
#include<stdlib.h>

struct nodeType
{
    int info;
    struct nodeType *left;
    struct nodeType *right;
};

typedef struct nodeType node;
node *root;

void insertnode(int item)
{
    node *p, *newnode, *back;
    p=root;
    back=NULL;
    newnode=(node *)malloc(sizeof(node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->info=item;
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

void inorder(node *p)
{
    if(p->left!=NULL)
        inorder(p->left);
    printf("%d ",p->info);
    if(p->right!=NULL)
        inorder(p->right);
}

void preorder(node *p)
{
    printf("%d ",p->info);
    if(p->left!=NULL)
        preorder(p->left);
    if(p->right!=NULL)
        preorder(p->right);
}

void postorder(node *p)
{
    if(p->left!=NULL)
        postorder(p->left);
    if(p->right!=NULL)
        postorder(p->right);
    printf("%d ",p->info);
}

int menu(void)
{
    int n;
    do
    {
        printf("press 1 for insert\n");
        printf("press 2 for display\n");
        printf("press 3 for exit\n");
        printf("your choice : ");
        scanf("%d",&n);
    }while(n<1||n>3);
    return n;
}

void display(void)
{
    if(root)
    {
        printf("Traversing pre oreder : \n");
        preorder(root);
        printf("\n");
        printf("Traversing post order : \n");
        postorder(root);
        printf("\n");
        printf("Traversing in order : \n");
        inorder(root);
        printf("\n");
    }
    else
        printf("BST is empty\n");
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
            case 2: display();
                    break;
            case 3: printf("exit\n");
                    break;
        }
    }while(choice!=3);
    return 0;
}

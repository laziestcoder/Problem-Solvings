/*
BST delete
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

void insertnode(item)
{
    node *newnode, *ptr, *save;
    newnode=(node *)malloc(sizeof(node));
    newnode->info=item;
    newnode->left=NULL;
    newnode->right=NULL;
    ptr=root;
    if(root==NULL)
        root=newnode;
    else
    {
        while(ptr!=NULL)
        {
            save=ptr;
            if(item<ptr->info)
                ptr=ptr->left;
            else
                ptr=ptr->right;
        }
        if(item<save->info)
            save->left=newnode;
        else
            save->right=newnode;
    }
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

void casea(node *loc, node *par)
{
    node *child;
    if(loc->left==NULL&&loc->right==NULL)
        child=NULL;
    else if(loc->left==NULL)
        child=loc->right;
    else
        child=loc->left;
    if(par!=NULL)
    {
        if(par->left==loc)
            par->left=child;
        else
            par->right=child;
    }
    else root=child;
}

void caseb(void)
{
    node *suc, *parsuc, *ptr, *save;
    ptr=loc->right;
    save=loc;
    while(ptr->left!=NULL)
    {
        save=ptr;
        ptr=ptr->left;
    }
    suc=ptr;
    parsuc=save;
    casea(suc, parsuc);
    if(par!=NULL)
    {
        if(par->left==loc)
            par->left=suc;
        else
            par->right=suc;
    }
    else
        root=suc;
    suc->left=loc->left;
    suc->right=loc->right;
}

void del(int item)
{
    search(item);
    if(loc==NULL&&par==NULL)
        printf("BST is empty\n");
    else if(loc==NULL)
        printf("%d not in the BST\n",item);
    else
    {
        if(loc->left==NULL||loc->right==NULL)
            casea(loc,par);
        else
            caseb();
    }
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

int menu(void)
{
    int n;
    do
    {
        printf("press 1 for insert\n");
        printf("press 2 for display\n");
        printf("press 3 for delete\n");
        printf("press 4 for exit\n");
        printf("your choice : ");
        scanf("%d",&n);
    }while(n<1||n>4);
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
            case 2: display();
                    break;
            case 3: printf("what to delete : ");
                    scanf("%d",&x);
                    del(x);
                    printf("after deleting : \n");
                    display();
                    break;
            case 4: printf("exit\n");
                    break;
        }
    }while(choice!=4);
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodeType
{
    int info;
    struct nodeType*left;
    struct nodeType*right;
};
typedef struct nodeType *nodeptr;
nodeptr root; //auto null
int insertNode(int Item)
{
    nodeptr p, newNode, b;
    p=root;
    b=NULL;
    newNode =(nodeType*)malloc(sizeof(nodeType));
    newNode ->left = NULL;
    newNode ->right = NULL;
    newNode ->info = Item;

    while(p!=NULL)
    {
        b=p;
        if(p->info>Item)
            p= p->left;
        else
            p= p->right;
    }
    if(b==NULL)
        root=newNode;
    else if(b->info>Item)
        b->left=newNode;
    else
        b->right=newNode;
    return 0;
}
void inOrder(nodeptr p)
{
    if(p!=NULL)
    {
        inOrder(p->left);
        printf("%d ",p->info);
        inOrder(p->right);
    }
}
void preOrder(nodeptr p)
{
    if(p!=NULL)
    {
        printf("%d  ",p->info);
        preOrder(p->left);
        preOrder(p->right);
    }
}
void postOrder(nodeptr p)
{
    if(p!=NULL)
    {

        postOrder(p->left);
        postOrder(p->right);
        printf("%d  ",p->info);
    }
}
int menu()
{
    int n;
    printf("\n\nMain Menu\n");
    printf("1. Insert\n");
    printf("2. Display\n");
    printf("3. Exit\n\n");
    printf("Enter Choice(1-3): ");
    scanf("%d",&n);
    printf("\n");
    return n;
}
void Display()
{
    if(root)
    {
        printf("\nTraverse Tree INORDER\n");
        inOrder(root);
        printf("\nTraverse Tree PREORDER\n");
        preOrder(root);
        printf("\nTraverse Tree POSTORDER\n");
        postOrder(root);
    }
    else printf("\nBST IS NULL\n");
}
int main()
{
    nodeptr p;
    int VAL;
    root =NULL;
    char ch[11];
    int n;
    n=menu();
    do
    {
        if(n==1)
        {
            printf("\nInsert a val :");
            scanf("%d",&VAL);
            insertNode(VAL);
        }
        if(n==2)
        {
            Display();
        }
        if(n==3)
        {
            printf("\n");
            break;
        }
        if(n>3)
            printf("\nWrong Choice\n");
        n=menu();
    }
    while(1);
}


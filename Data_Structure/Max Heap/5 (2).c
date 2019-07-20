/*
maxheap delete
*/

#include<stdio.h>
#include<math.h>

int n, tree[100];

void insert(int item)
{
    int ptr, par;
    n=n+1;
    ptr=n;
    while(ptr>1)
    {
        par=ptr/2;
        if(item<=tree[par])
        {
            tree[ptr]=item;
            break;
        }
        tree[ptr]=tree[par];
        ptr=par;
    }
    tree[ptr]=item;
}

void display(void)
{
    int level=-1, quee[100], front, rear, ptr, i, lim, count=0;
    rear=1;
    front=1;
    quee[rear]=1;
    while(1)
    {
        level++;
        lim=pow(2,level);
        count+=lim;
        if(count>n)
        {
            lim-=(count-n);
            count=n;
        }
        for(i=1;i<=lim;i++)
        {
            ptr=quee[front];
            front++;
            printf("%d ",tree[ptr]);
            if(ptr*2<=n)
                quee[++rear]=ptr*2;
            if(ptr*2+1<=n)
                quee[++rear]=ptr*2+1;
	}
	printf("\n");
        if(count==n)
            break;
    }
}

int del(void)
{
    int ptr, left, right, item, last;
    item=tree[1];
    last=tree[n];
    n--;
    ptr=1;
    left=2;
    right=3;
    while(right<=n)
    {
        if(last>=tree[left]&&last>=tree[right])
        {
            tree[ptr]=last;
            break;
        }
        else if(tree[left]>=tree[right])
        {
            tree[ptr]=tree[left];
            ptr=left;
        }
        else
        {
            tree[ptr]=tree[right];
            ptr=right;
        }
        left=ptr*2;
        right=ptr*2+1;
    }
    if(left==n&&tree[left]>last)
    {
        tree[ptr]=tree[left];
        ptr=left;
    }
    tree[ptr]=last;
    return item;
}

int menu(void)
{
    int choice;
    do
    {
        printf("press 1 for insert\n");
        printf("press 2 for display\n");
        printf("press 3 for delete\n");
        printf("press 4 for exit\n");
        printf("your choice : ");
        scanf("%d",&choice);
    }while(choice<1||choice>4);
    return choice;
}

int main()
{
    int choice, item;
    do
    {
        choice=menu();
        switch(choice)
        {
            case 1: printf("insert item : ");
                    scanf("%d",&item);
                    insert(item);
                    break;
            case 2: if(n==0)
                        printf("the heap is empty\n");
                    else
                    {
                        printf("the heap is : \n");
                        display();
                    }
                    break;
            case 3: if(n==0)
                        printf("the heap is empty\n");
                    else
                        item=del();
                    if(n)
                    {
                        printf("after deleting : \n");
                        display();
                    }
                    else
                        printf("the heap is empty after deleting\n");
                    break;
            case 4: printf("exit\n");
                    break;
        }
    }while(choice!=4);
    return 0;
}

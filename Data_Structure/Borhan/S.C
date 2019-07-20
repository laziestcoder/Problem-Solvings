// Stack Push Pop
#include<stdio.h>

int main()
{
    int x, choice, top=-1, stack[5], i;
    do
    {
        printf("press 1 for push\n");
        printf("press 2 for pop\n");
        printf("press 3 for exit\n");
        printf("your choice : ");
        scanf("%d",&choice);
        if(choice==1)
        {
            if(top==4)
                printf("overflow\n");
            else
            {
                printf("input a value : ");
                scanf("%d",&x);
                top++;
                stack[top]=x;
            }
        }
        else if(choice==2)
        {
            if(top==-1)
                printf("underflow\n");
            else
                top--;
        }
        printf("contents of stack : ");
        for(i=0;i<=top;i++)
            printf("%d ",stack[i]);
        printf("\n");
    }while(choice!=3);
    return 0;
}

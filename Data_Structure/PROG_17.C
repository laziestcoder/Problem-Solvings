// Algorithm: 4.2, 4.3, Inserting and Deleting in an Array
#include<stdio.h>
#define UB 10

int array[UB]={21,2,43,14,-5,46,87,8};
int insert_item(int LA[],int N, int k, int item);
int delete_item(int LA[], int N, int k);

int main()
{
    int ITEM, LOC;
    int i, size=8;
    int choice;

    printf("Array: ");
    for(i=0;i<size;i++)
        printf("%d",array[i]);

    printf("\nEnter your choice: \n\n1. Insert an element\n2. Delete an element\n ");
    scanf("%d",&choice);

    if(choice!=1 && choice!=2)
    {
        printf("\nInvalid Choice");
        getch();
        exit(1);
    }
    else if(choice==1)
    {
        printf("\n\nEnter the element to be inserted in the array: ");
        scanf("%d",&ITEM);

        printf("\nEnter the location where element %d is to be inserted: ",ITEM);
        scanf("%d",&LOC);
        if(LOC<=size)
            size=insert_item(array,size,LOC,ITEM);
        else
        {
            printf("\nThe entered location is out of bound");
            getch();
            exit(1);
        }
        printf("\nModified array: ");
        for(i=0;i<size;i++)
            printf("%d",array[i]);

        getch();
    }

    else
    {
        printf("\nEnter the location from where element is to be deleted: ");
        scanf("%d",&LOC);
        if(LOC<=size)
            size=delete_item(array,size,LOC);
        else
        {
            printf("\nThe entered location is out of bound");
            getch();
            exit(1);
        }
        printf("\nModified array: ");
        for(i=0;i<size;i++)
            printf("%d",array[i]);
        getch();
    }
}

int insert_item(int LA[], int N, int k, int item)
{
    int j=N;
    while(j>=k-1)
    {
        LA[j+1]=LA[j];
        j--;
    }
    LA[k-1]=item;
    return(N+1);
}

int delete_item(int LA[], int N, int k)
{
    int j, item;
    item=LA[k-1];
    printf("\nItem %d deleted from location %d\n",item,k);
    for(j=k-1;j<N-1;j++)
        LA[j]=LA[j+1];
    return(N-1);
}

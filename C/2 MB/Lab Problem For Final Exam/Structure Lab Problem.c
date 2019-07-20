#include<stdio.h>
int main()
{
    struct ad
    {
        char phone[15];
        char city[25];
        int pin;
    };
    struct em
    {
        char name[30];
        struct ad a;
    };
    struct em e[100] ;
    int i,record;
    printf("How many Records");
    scanf("%d",&record);
    for(i=0;i<record;i++)
    {
        printf("Enter new Record%d:",i+1);
        fflush(stdin);
        scanf("%s",e[i].name);
        fflush(stdin);
        scanf("%s",e[i].a.phone);
        fflush(stdin);
        scanf("%s",e[i].a.city);
        fflush(stdin);
        scanf("%d",&e[i].a.pin);
    }

    for(i=0;i<record;i++)
    {
        printf("\n---Record%d:",i+1);
        printf("\n%s\n%s\n%s\n%d",e[i].name,e[i].a.phone,e[i].a.city,e[i].a.pin);
    }

    return 0;
}

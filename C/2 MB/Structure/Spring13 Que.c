//Problem
#include<stdio.h>
struct student
{
    char name[40];
    char id[10];
    char dept[10];
    char sec;
    float gpa;
};
int main()
{
    char d;
    struct student s[100];
    int n,i;
    scanf("%d",&n);
    d=getchar();
    for(i=1;i<=n;i++)
    {
        scanf("%s%s%s%c%f",s[i].name,s[i].id,s[i].dept,&s[i].sec,&s[i].gpa);
        d=getchar();
    }
    for(i=1;i<=n;i++)
    {
        printf("%s%s%s%c%f\n",s[i].name,s[i].id,s[i].dept,s[i].sec,s[i].gpa);
    }
    return 0;
}

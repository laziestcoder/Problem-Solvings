struct info
{
    int age,salary;
    char name[10],degree[10],occup[10];
};
int main()
{
    struct info m[1];
    int i;
    for(i=0;i<1;i++)
        scanf("%d%d%s%s%s",&m[i].age,&m[i].salary,m[i].name,m[i].degree,m[i].occup);

    for(i=0;i<1;i++)
        printf("%d %d %s %s %s",m[i].age,m[i].salary,m[i].name,m[i].degree,m[i].occup);
}

//#include<stdio.h>
struct student
{
    char name[10],id[10];
    double cg;
};
int main()
{
    struct student s1,s2;
    scanf("%s %s %lf",s1.name,s1.id,&s1.cg);
    printf("%s %s %.2lf",s1.name,s1.id,s1.cg);

    scanf("%s %s %lf",s2.name,s2.id,&s2.cg);
    printf("%s %s %lf",s2.name,s2.id,s2.cg);

    return 0;
}

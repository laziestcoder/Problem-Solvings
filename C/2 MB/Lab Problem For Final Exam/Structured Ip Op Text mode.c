#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char another='Y';
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    fp=fopen("EMPLOYMENT.DAT","w");

    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    while(another=='Y')
    {
        printf("\nEnter name,age and basic salary:");
        scanf("%s %d %f", e.name,&e.age,&e.bs);
        fprintf(fp,"%s %d %f\n", e.name,e.age,e.bs);
        printf("Add another record (Y/N):");

        another=getche();
    }
    fclose(fp);
    fp=fopen("EMPLOYMENT.DAT","r");

    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    while(fscanf(fp,"%s %d %f",e.name,&e.age,&e.bs)!=EOF)
        printf("\n%s %d %.2f",e.name,e.age,e.bs);
        getch();
        fclose(fp);

    return 0;
}

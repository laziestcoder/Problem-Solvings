/*Generate 100 Integers Randomly then store in a file and read back the contents*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,x;
    FILE *fp;
    fp=fopen("a.txt","w");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    srand(time(NULL));//Library Function for generating Random numbers
    for(i=1;i<=100;i++)
    {
        x=rand();
        fprintf(fp,"%d\n",x);
    }
    fclose(fp);
    fp=fopen("a.txt","r");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    for(i=1;i<=100;i++)
    {
        fscanf(fp,"%d",&x);
        printf("%d\n",x);
    }
    fclose(fp);
    return 0;
}

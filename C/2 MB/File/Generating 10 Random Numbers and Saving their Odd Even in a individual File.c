#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,x;
    FILE *f1,*f2,*f3;
    f1=fopen("first.txt","w");
    srand(time(NULL));
    for(i=1;i<=10;i++)
    {
        x=rand()%100+1;
        fprintf(f1,"%d\n",x);
    }
    fclose(f1);
    f1=fopen("first.txt","r");
    f2=fopen("even.txt","w");
    f3=fopen("odd.txt","w");
    for(i=1;i<=10;i++)
    {
        fscanf(f1,"%d",&x);
        if(x%2==0)
            fprintf(f2,"%d\n",x);
        else
            fprintf(f3,"%d\n",x);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}

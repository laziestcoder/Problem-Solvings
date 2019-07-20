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
    return 0;
}

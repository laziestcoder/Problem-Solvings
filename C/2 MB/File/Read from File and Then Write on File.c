#include<stdio.h>
int main()
{
    FILE *f1,*f2;
    char str[80];
    float f;
    f1=fopen("file1.txt","r");
    fscanf(f1,"%s%f",str,&f);
    fclose(f1);
    f2=fopen("abc.txt","w");
    fprintf(f2,"%s%f",str,f);
    fclose(f2);
    return 0;
}

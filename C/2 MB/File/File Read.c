#include<stdio.h>
int main()
{
    FILE *fp;
    char str[80];
    float f;
    fp=fopen("file1.txt","r");
    fscanf(fp,"%s%f",str,&f);
    printf("%s%f",str,f);
    fclose(fp);
    return 0;
}

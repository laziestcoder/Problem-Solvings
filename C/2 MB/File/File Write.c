#include<stdio.h>
int main()
{
    FILE *fp;
    char str[80];
    float f;
    scanf("%s%f",str,&f);
    fp=fopen("file1.txt","w");
    fprintf(fp,"%s%f",str,f);
    fclose(fp);
    return 0;
}

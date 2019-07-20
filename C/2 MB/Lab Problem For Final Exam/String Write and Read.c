#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{ FILE *fp;
  char s[80];
  fp=fopen ("file1.txt","w");
if(fp==NULL)
{
    puts("Cannot open file");
    exit(1);
}
    printf("\nEnter a few lines of text:\n");
    while(strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    fp=fopen ("file1.txt","r");
if(fp==NULL)
{
    puts("Cannot open file");
    exit(1);
}
    while(fgets(s,79,fp)!=NULL)
        printf("%s",s);

    fclose(fp);
    getch();
    return 0;
}

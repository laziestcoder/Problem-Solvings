#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,indx,count;
    gets(a);
    gets(b);
    count=0;

    for(i=0;a[i]!='\0';i++)
        count++;
    indx=count;
    for(i=0;b[i]!='\0';i++)
    {
        a[indx]=b[i];
        indx++;
    }
    a[indx]='\0';
    printf("%s\n",a);
    printf("%s",b);

    return 0;
}

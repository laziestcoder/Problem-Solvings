#include<stdio.h>
int main()
{
    char sen[100];
    int i,count=0;
    gets(sen);
    for(i=0;sen[i]!='\0';i++)
        count++;
    printf("%d",count);
    return 0;
}

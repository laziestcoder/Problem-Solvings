#include<stdio.h>
int main()
{
    char sen[100];
    int i,space=0;
    gets(sen);
    for(i=0;sen[i]!='\0';i++)
        if(sen[i]==' ')
        space++;
    printf("%d",space+1);

    return 0;
}

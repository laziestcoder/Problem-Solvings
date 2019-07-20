#include<stdio.h>
#include<string.h>
int main()
{
    char d[16][10]={"dog","Hund","no","Nein","year","Jahr","child","Kind","I","Ich"},word[10];
    int loc=-1,i;
    gets(word);

    for(i=0;i<10;i++)
        if(strcmp(word,d[i])==0)
            loc=i;
    if(loc==-1)
        printf("not found");
    else
        printf("%s",d[loc+1]);

    return 0;
}

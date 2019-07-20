#include<stdio.h>
int main()
{
    int i,v=0,c=0;
    char str[20];
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        v++;
        else
            c++;
    }
    printf("%d %d",v,c);

    return 0;
}

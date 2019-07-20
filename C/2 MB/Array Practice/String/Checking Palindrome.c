#include<stdio.h>
int main()
{
    char str[100];
    int start,end,count,flag=1;
    gets(str);
    count=strlen(str);

    end=count-1;
    start=0;

    while(end>start)
    {
        if(str[end]!=str[start])
        flag=0;
        end--;
        start++;
    }
    if(flag==1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

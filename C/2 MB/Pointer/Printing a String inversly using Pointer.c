#include<stdio.h>
#include<string.h>
int main()
{
    char str1[80]="POINTERS";
    char str2[80],*p1,*p2,x;
    p1=str1;
    x=strlen(str1);
    p1=p1+(x-1);
    p2=str2;

    while(p1>=&str1[0])
    {
        *p2=*p1;
        p2++;
        p1--;
    }
    *p2='\0';
    printf("%s",str2);

    return 0;
}

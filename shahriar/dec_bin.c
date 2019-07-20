#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    char bla[100];
    printf("Enter decimal value: ");
    scanf("%d",&num);
    itoa(num,bla,2);
    printf("bin :%s ",bla);
    return 0;
}

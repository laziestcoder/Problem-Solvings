/*
converting from one base to another
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
int fbase, tbase;
char str[10];

void convert(int n)
{
    int x;
    if(n/tbase)
        convert(n/tbase);
    x=n%tbase;
    switch(x)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: printf("%d",x); break;
        case 10:printf("A"); break;
        case 11:printf("B"); break;
        case 12:printf("C"); break;
        case 13:printf("D"); break;
        case 14:printf("E"); break;
        case 15:printf("F"); break;
    }
}

int to_dec(void)
{
    int i, len, num=0;
    len=strlen(str);
    for(i=0;i<len;i++)
        if(isdigit(str[i]))
            num+=(str[i]-'0')*pow(fbase,len-1-i);
        else
            num+=((str[i]-('A'-1))+9)*pow(fbase,len-1-i);
    return num;
}

int main()
{
    printf("insert original base : ");
    scanf("%d",&fbase);
    printf("insert original number : ");
    scanf("%s",str);
    printf("convert to base : ");
    scanf("%d",&tbase);
    printf("after converting to base %d : ",tbase);
    convert(to_dec());
    printf("\n");
    return 0;
}

//Inline Function in C using Macro
#include<stdio.h>
#define add(a,b) a + b //Macro
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",add(x,y));
    return 0;
}

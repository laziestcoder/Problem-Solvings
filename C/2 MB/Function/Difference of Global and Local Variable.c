/*If the Global Variable and Local Variable have the same name
Function will works with the Local Variable.As like Our Friend and
close Friend.*/
#include<stdio.h>
int a,b;
int change()
{
    a--;
    b--;
    printf("%d%d\n",a,b);
}
int main()
{
    int a,b;
    a=10;
    b=5;
    change();
    printf("%d %d",a,b);
    return 0;
}


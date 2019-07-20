//Initial Value or Garbage value of Global variable is 0.
#include<stdio.h>
int a,b;
int change()
{
    a--;
    b--;
}
int main()
{
    a=10;
    b=5;
    change();
    printf("%d %d",a,b);

    return 0;
}

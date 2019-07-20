#include<stdio.h>
void leap(int x)
{
    if((x%400==0)||(x%4==0&&x%100!=0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}
int main()
{
    int y;
    scanf("%d",&y);
    leap(y);
    return 0;
}

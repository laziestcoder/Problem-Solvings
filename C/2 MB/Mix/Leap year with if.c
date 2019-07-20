#include<stdio.h>
int main()
{
    int y,l;
    scanf("%d",&y);
    l=(y%400==0)||(y%4==0&&y%100!=0)?1:0;

    if(l==1)
        printf("Leap year");
    else
        printf("Not leap year");

    return 0;
}

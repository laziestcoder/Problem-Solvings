/*WAP to check that a given year is a leap year or not.
Definition of leap year:

Rule #1: A year is called leap year if it is divisible by 400.
For example: 1600, 2000 etc leap year while 1500, 1700 are not leap year.
Rule #2: If year is not divisible by 400 as well as 100 but it is divisible by 4 then that year are also leap year.
For example: 2004, 2008, 1012 are leap year

solve koro TLE< 2 sec */


#include<stdio.h>
int main ()

{
    int n;
    while(scanf("%d",&n)!=EOF){
    if (n%400== 0)
        printf("Leap Year.");
    else if(n%100!=0 && n%4==0 )
        printf("Leap Year.");
    else
        printf("Not Leap Year.");
    }return 0;
}

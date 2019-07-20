/*Write a program to find the sum and average of the following series:
                                       1 + 4 + 7 + - - - - - + n
*/
#include<stdio.h>
int main()
{
    double sum=0,avg,n,a,d;
    printf("How many values : ");
    scanf("%lf",&n);
    a=1;
    d=3;
    sum=(n/2)*(2*a+(n-1)*d);
    avg=sum/n;
    printf("Summation of %.0lf values : %.0lf\n",n,sum);
    printf("Average : %lf",avg);
    return 0;
}

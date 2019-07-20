#include<stdio.h>
int main()
{
    float a,b,c,sum,avg;
    printf("\n Welcome!\n\n  Input first student number:\n\n\n");
    scanf("%f", &a);
    printf("\n\n  Input second student number:\n\n\n");
    scanf("%f", &b);
    printf("\n\n  Input third student number:\n\n\n");
    scanf("%f", &c);
    sum=a+b+c;
    avg=sum/3;
    printf("\n\nTotal marks of the student is %.2f and average is %.2f", sum, avg);
    return 0;
}

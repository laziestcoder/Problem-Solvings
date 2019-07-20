#include<stdio.h>
int main ()
{
    float C,I;
    printf("Enter your value in inch:");
    scanf("%f",&I);
    C=I*2.54;
    printf("The value in centimeter is=%f cm",C);
    return 0;
}

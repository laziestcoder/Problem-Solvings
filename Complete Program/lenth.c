#include<stdio.h>
int main()
{
    float inch,centi;
    printf(" Welcome! \n\n Input your number in inch scale:\n\n");
    scanf("%f", &inch);
    centi=inch*2.54;
    printf("Converted data in centimeter scale is=%.2f \n", centi);
    return 0;

}

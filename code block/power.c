#include<stdio.h>
#include<math.h>
int main()
{
float i,a,p;
printf("Enter the base: ");
scanf("%f",&i);
printf("Enter the power: ");
scanf("%f",&p);
a=pow(i,p);
printf("The solution of power and base is %.0f",a);
return 0;
}

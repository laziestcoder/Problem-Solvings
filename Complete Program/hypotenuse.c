#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c;
    printf("\n Welcome!\n\n  Input value of first side of a right triangle:\n\n ");
    scanf("%f",&a);
    printf("\n\n  Input value of second side of a right triangle:\n\n ");
    scanf("%f",&b);
    c=sqrt(a*a+b*b);
    printf("\n\n The hypotenuse is %.2f .",c);
    return 0;
}

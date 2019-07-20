#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,s,x,area;
    printf("\n Welcome!\n\n  Input value of first side of a triangle:\n\n ");
    scanf("%f",&a);
    printf("\n\n  Input value of second side of a triangle:\n\n ");
    scanf("%f",&b);
    printf("\n\n  Input value of third side of a triangle:\n\n ");
    scanf("%f",&c);
    x=a+b+c;
    s=x/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n\n Area of the triangle is %.2f and perimeter is %.2f .",area,x);
    return 0;
}

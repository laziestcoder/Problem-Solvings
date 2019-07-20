#include<stdio.h>
#define pi 3.14159
int main ()

{
    float area,circumference,radius;
    printf("\n Welcome!\n\n  Input radius of a circle:\n\n");
    scanf("%f",&radius);
    area=radius*radius*pi;
    circumference=2*radius*pi;
    printf("Area of the circle is %.2f and Circumference is %.2f", area, circumference);
    return 0;
}

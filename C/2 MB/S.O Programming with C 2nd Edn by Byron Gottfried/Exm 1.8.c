/* program to calculate the area of a circle, with error checking */

#include <stdio.h>

#define PI 3.14159

float process(float radius);            /* function prototype */

main()
{
    float radius, area;                 /* variable declaration */

    printf("Radius = ?");
    scanf("%f", &radius);

    if (radius < 0)
        area = 0;
    else
        area = process(radius);
    printf("Area = %f", area);

    float process(float r)              /* function definition */
    {
        float a;                        /* local variable declaration */

        a = PI * r * r;
        return(a);
    }
}

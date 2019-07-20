#include <stdio.h>

int main()
{
    float length, breadth, radius, area_rec, per_rec;
    float area_cir;
    float ccum_cir;

    printf("Enter the length of the rectangle: ");

    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");

    scanf("%f", &breadth);

    printf("Area of the rectangle is: %f", area_rec = length * breadth);

    printf("\nPerimeter of the rectangle is: %f", per_rec = 2 * (length + breadth));

    printf("\n\nEnter the radius of the circle: ");

    scanf("%f", &radius);

    printf("Area of the circle is: %f", area_cir = 3.1416 * radius * radius);

    printf("\nCircumference of the circle is: %f\n", ccum_cir = 2 * 3.1416 * radius);

    return 0;
}

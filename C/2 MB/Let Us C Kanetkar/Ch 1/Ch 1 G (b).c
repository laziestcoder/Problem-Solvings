#include <stdio.h>

int main()
{
    float dis_km, dis_meter, dis_feet, dis_inch, dis_centimeter;

    printf("Enter the distance between two cities in KM: ");

    scanf("%f", &dis_km);

    printf("Distance in meters: %f", dis_meter = dis_km * 1000);

    printf("\nDistance in feet: %f", dis_feet = dis_meter * 3.28);

    printf("\nDistance in inches: %f", dis_inch = dis_feet * 12);

    printf("\nDistance in centimeters: %f", dis_centimeter = dis_inch * 2.54);

    return 0;
}

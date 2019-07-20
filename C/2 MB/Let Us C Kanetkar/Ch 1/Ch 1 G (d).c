#include <stdio.h>

int main()
{
    double farenheit, centigrade;

    printf("Enter the Temperature of the city in Farenheit: ");

    scanf("%lf", &farenheit);

    centigrade = (farenheit - 32) / 1.8;

    printf("The Temperature in centigrade is: %lf", centigrade);

    return 0;
}

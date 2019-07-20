#include<stdio.h>

int main()
{
    double f,c;
    printf("\nWelcome!\n\n\n Input your data in degree Fahrenheit scale:\n\n");
    scanf("%lf",&f);
    c=(f-32)*0.56;
    printf("\nThe converted result is %.2lf degree Celsius.\n\n\n",c);
    return 0;
}

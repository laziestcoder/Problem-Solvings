#include<stdio.h>

int main()
{
    float r,v,a;
    scanf("%f",&r);

    v= (4*3.1416*r*r*r)/3;
    a= 4*3.1416*r*r;

    printf("%f %f",v,a);

    return 0;


}

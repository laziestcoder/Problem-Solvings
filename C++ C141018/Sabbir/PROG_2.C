#include<stdio.h>
main(){
float c,f;
    printf ("enter temparature in farenheit :");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("the temparature in celcious is :%.2f", c);
    return 0;
}

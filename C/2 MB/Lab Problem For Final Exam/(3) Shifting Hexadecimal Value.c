/*Suppose v=0x6db7 is a 16 bit value.Find out v>>3, v<<3*/
#include<stdio.h>
#include<math.h>
int main()
{
    int v=0x6db7,a;
    a=v>>3;
    printf("%d\n",a);
    a=v<<3;
    printf("%d",a);
    return 0;
}

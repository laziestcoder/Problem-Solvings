#include<stdio.h>

int main()
{
    float S,A,B;
    printf("Enter two numbers:");
    scanf ("%f%f", &A,&B);
    {if (A>B)
        {S=A-B;
    printf("sum=%f",S);}
    else {S=B-A;
    printf("sum=%f",S);}}
    return 0;
}

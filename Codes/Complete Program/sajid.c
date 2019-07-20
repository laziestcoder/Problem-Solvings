#include<stdio.h>
int main()
{
    float H,B,hypotenes;
    printf("Enter the length of the Height and Base of a right angle triangle:");
    scanf("%f%f",&H,&B);
    hypotenes = sqrt(H*H+B*B);
    printf("hypotenes = %f",hypotenes);
    return 0;
}

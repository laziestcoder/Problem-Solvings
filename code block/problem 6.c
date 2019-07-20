#include<stdio.h>
int main()
{
    float A,B,C;
    printf("Enter three numbers:");
    scanf("%f%f%f",&A,&B,&C);
    if(A<B)
    {
        if(A<C)
            printf("Smallest=%f",A);
        else printf("Smallest=%f",C);
    }
    else
        {
            if (B<C)
        printf("Smallest=%f",B);
         else printf("Smallest=%f",C);
          }

        return 0;

}

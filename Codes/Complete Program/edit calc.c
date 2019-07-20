#include<stdio.h>
int main()
{
    float A,B,M,Add,Sub,Multi,Divi;
    printf("Enter numbers:");
    scanf("%f%f",&A,&B);
    printf("For Add press 1\n\nFor Sub press 2\n\nFor Multi press 3\n\nFor Divi press 4\n\n");
    scanf("%f",&M);
    {if (M==1)
        {
        Add=A+B;
        printf("Addition=%.2f",Add);
        }
    else
        {if(M==2)
        {
        Sub=A-B;
        printf("Subtraction=%.2f",Sub);
        }
        else
            {if(M==3)
        {
            Multi=A*B;
            printf("Multiplication=%.2f",Multi);
        }
        else
            {if(M==4)
            {
                printf("\nEnter values:\n");
                scanf("%f%f",&A,&B);
                Divi=A/B;
                 {if (B==0)
                 {
                    Divi=A/B;
                printf("It is Undefined ",Divi);}}}
                else
                    {
                Divi=A/B;
                printf("Division=%.2f",Divi);}
                }}}}
return 0;
}

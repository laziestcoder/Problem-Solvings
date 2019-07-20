#include<stdio.h>
int factorial(int n)
{
    if(n<=1)
        return 1;
    else
        return(n*factorial(n-1));
}
void main()
{
    int number,fac;
    printf("Enter a number to find factorial: ");
    scanf("%d",&number);
    fac=factorial(number);
    printf("Result is: %d",fac);
}

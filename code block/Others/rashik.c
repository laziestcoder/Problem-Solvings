#include<stdio.h>

int main()
{

    int i,n,a,k,sum;
    int A,sum=0;
    scanf("%d", &n);
    k=n;

    for(i=0;;i++){
    a= n%10;
    printf("DD");
    A = a*a*a;
    n = n/10;
    sum  = sum + A;
    if (n==0)
    break;

    }
    if (sum== k)
    printf("%d if an armstrong number", k);
else
printf("%d is not an arm num",k);
}

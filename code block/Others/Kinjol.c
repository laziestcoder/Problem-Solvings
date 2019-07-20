#include<stdio.h>
#include<math.h>
int main()
{
    float n,i,sum,a,p;

    printf("Enter the limit of base: ");
    scanf("%f",&n);
    printf("Enter the power: ");
    scanf("%f",&p);
    sum=0;
    for(i=1; i<=n; i++)
        {
        a=pow(i,p);
        sum=sum+a;
        }
    printf("The sum of series is %.0f",sum);
    getch();
    return 0;
}

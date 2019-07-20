// Prime Number
#include<stdio.h>
int main()
{
    int n,i,trap=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%i==0)
            trap++;
    if(trap==2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

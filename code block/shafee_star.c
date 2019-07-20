#include<stdio.h>
int main()
{
    int i,j,n,l;

    for(i=1; i<=8; i++)
    {
        for(l=1; l<=8-i; l++)
        {
            printf("    ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("%4d",j);
        }
    }
}

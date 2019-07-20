#‎include‬<stdio.h>

int main()
{
int a,b,c,i,j,k,l,n,bin,p,r=0;
printf("Enter a binary number: ");
scanf("%d", &bin);
n = bin;
b =1;
for(;n!=0;)
{
a = n%10;
r = r + a*b;
b = b*2;
n = n/10;
}
printf("The decimal number is: %d",r);
return 0;
}

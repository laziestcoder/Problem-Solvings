#‎include‬ <stdio.h>
int main()
{
int num,i,a,count=0,n;
printf("\nEnter a DECIMAL number : ");
scanf("%d",&num);
n=num;

for(;n!=0;)
{
n=n / 2;
count++;
}
int ar[count];

printf("\n\n BINARY number is : ");

for(i=1;i<=count && num!=0;i++)
{
a=num % 2;
num=num / 2;
ar[i-1]=a;
}

for(i=count;i>=1;i--)
{
printf("%d",ar[i-1]);
}
getch();
return 0;
}

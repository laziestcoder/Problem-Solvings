#‎include‬<stdio.h>

int main()
{
int a,b,c,d,e,f,r,i,j,k,l,n,num,dec;
printf("Enter the base of the number system you wanna transform: ");
scanf("%d", &b);
printf("\nEnter the number: ");
scanf("%d", &num);
printf("\nEnter the base of the number system you wanna transform to: ");
scanf("%d", &c);
n = num;

if(b!=10)
{
r = 0;
d = 1;
for(;n!=0;)
{
a = n%10;
r = r + a*d;
n = n/10;
d = d*b;
}
dec = r;

if(c!=10)
{
n = dec;
r = 0;
d = 1;
for(;n!=0;)
{
a = n%c;
r = r + a*d;
d = d*10;
n = n/c;

}
printf("Wanted number is: %d\n",r);
}
else printf("%d",dec);
}
else
{
r = 0;
d = 1;
for(;n!=0;)
{
a = n%c;
r = r + a*d;
n = n/c;
d = d*10;

}
printf("Wanted number is %d\n",r);
}
return 0;
}

#include<stdio.h>
int main()
{
int i,j,k,dec=0,count = 0,base1,p=1,c,num,base2,n,a;
char str[20];
printf("Enter the base of the number system you want to convert: ");
scanf("%d",&base1);
printf("\nEnter the number you wanna convert: ");
if(base1!=10)
{
scanf("%s",&str);
}
else scanf("%d",&num);
printf("\nEnter the base of the number you wanna convert to: ");
scanf("%d",&base2);

if(base1!=10)
{
for(j=0;str[j]!='\0';j++)
{
count++;
}
for(i=count;i>0;i--)
{
k = str[i-1]>64?str[i-1]-55:str[i-1]-48;
k = k*p;
dec = dec + k;
p = p*base1;

}
if(base2==10) printf("Wanted number is: %d",dec);
else{
n = dec;
k = n;
count = 0;
for(;k!=0;)
{
k = k/base2;
count++;
}
char w,s,arra[count];
for(i=1;i<=count;i++)
{
a = n%base2;

a = a>9?a+55:a+48;

n = n/base2;
arra[i-1]=a;
}
printf("Wanted number is: ");
for(i=count;i>=1;i--)
{
printf("%c",arra[i-1]);
}
}
printf("\n");

}
else
{
n = num;
k = n;
count = 0;
for(;k!=0;)
{
k = k/base2;
count++;
}
char w,s,arra[count];
for(i=1;i<=count;i++)
{
a = n%base2;

a = a>9?a+55:a+48;

n = n/base2;
arra[i-1]=a;
}
printf("Wanted number is: ");
for(i=count;i>=1;i--)
{
printf("%c",arra[i-1]);
}
printf("\n");

}
return 0;

}

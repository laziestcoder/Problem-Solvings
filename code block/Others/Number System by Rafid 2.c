#‎include‬<stdio.h>

int main()
{
int a,b,c,d,e,f,r,i,j,k,l,n,num,dec,count;
printf("Enter the base of the number system you wanna transform: ");
scanf("%d", &b);
printf("\nEnter the number: ");
scanf("%d", &num);
printf("\nEnter the base of the number system you wanna transform to: ");
scanf("%d", &c);
n = num;

if(b<10)
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

if(c<10)
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
else if(c==10) printf("Wanted number is: %d",dec);
else if(c>10)
{
n = dec;
k = n;
count = 0;
for(;k!=0;)
{
k = k/c;
count++;
}
char w,s,arra[count];
for(i=1;i<=count&&n!=0;i++)
{
a = n%c;

if(a>9) a = a + 55;
else a = a + 48;
n = n/c;
arra[i-1]=a;
}
printf("Wanted number is: ");
for(i=count;i>=1;i--)
{
printf("%c",arra[i-1]);
}
printf("\n");
}
}
else if(b==10)
{
if(c<10)
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
else
{
k = n;
count = 0;
for(;k!=0;)
{
k = k/c;
count++;
}
char w,s,arra[count];
for(i=1;i<=count&&n!=0;i++)
{
a = n%c;

if(a>9) a = a + 55;
else a = a + 48;
n = n/c;
arra[i-1]=a;
}
printf("Wanted number is: ");
for(i=count;i>=1;i--)
{
printf("%c",arra[i-1]);
}
printf("\n");
}

}

return 0;
}

#include<stdio.h>
int sum( int x,int y)
{ int w;
w=x+y;
return w;}

int factorial( int x)
{ int w,i;
w=1;
for( i=1; i<=x ; i++)
{ w=w*i ;
}
return w; }

int main()
{ int a,b,c,d;
printf(" enter a and b\n");
scanf(" %d %d " , &a,&b);
c=sum(a,b);
d=factorial(a);
printf(" the sum of %d and %d is %d and factorial of %d is %d", a,b,c,a,d);
return 0;
}

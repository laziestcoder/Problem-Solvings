#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,n1,n2,res=1; // n1=a=1st number,n2=b=2nd number,res=result

   printf("Enter any two numbers:\n");
   scanf("%d%d",&n1,&n2);
   a=n1;
   b=n2;
   while(n2>0)
    {
    res=res*n1;
    n2--; // n2=n2-1 can also be written as n2--
    }
    printf("\n%d raised to the power %d is %d",a,b,res);
    //getch();
}


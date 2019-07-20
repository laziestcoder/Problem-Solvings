#include<stdio.h>
//#include<conio.h>
main()
{
   int num;
   float fact=1;  //num=number,fact=factorial value

   printf("Enter any number to find its factorial value : ");
   scanf("%d",&num);
   while(num>0)
   {
     fact=fact*num;
     num=num-1;  //decrement loop counter
   }
   printf("\nFactorial value = %.3f",fact); // '%.3f' will show only 3 digits after decimal
   getch();
}


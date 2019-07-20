#include<stdio.h>
#include<math.h>
int main ()
{
    float add,sub,multi,div,a,b;
    int N,choice;
    printf(" It\'s a normal calculating program made by Towfiqul Islam. \n\n                  \"fb.com\\towfiq.106\". \n\n\n\n Welcome to my calculator.\n\n\n What do you want to do with any two numbers?\n\n Press:\n   1 for Addition,\n   2 for Subtraction,\n   3 for Multiplication and\n   4 for Division.\n\n\n");
    scanf("%d",&N);
    {if(N==1)
        {printf("Input two number:\n");
         scanf("%f \n %f",&a,&b);
         add=a+b;
         printf("The addition between %.2f and %.2f is %.2f. Thank You.",a,b,add);}
    else
         {if(N==2)
                {printf("Input two number:\n");
                scanf("%f \n %f",&a,&b);
                sub=a-b;
                printf("The subtraction between %.2f and %.2f is %.2f. Thank You.",a,b,sub);}
            else
                  {if(N==3)
                    {printf("Input two number:\n");
                    scanf("%f \n %f",&a,&b);
                    multi=a*b;
                    printf("The multiplication between %.2f and %.2f is %.2f. Thank You.",a,b,multi);}
                  else
                         {if(N==4)
                            {printf("Input two number:\n");
                             scanf("%f \n %f",&a,&b);
                                {if(b==0)
                                    {printf("The division result is UNDEFINED.");}
                                else
                                    {div=a/b;
                                    printf("The division between %.2f and %.2f is %.2f. Thank You.",a,b,div);}}}
                          else
                              {printf("\n\nWrong input. Thank you for using my calculating program.\n\n\n");}}}}}

              	printf("\n\nEnter Choice: 1. Continue  2. Exit\n\n\n");
				scanf("%d",&choice);
				if(choice==1){
					          main();
               				}
				if(choice==2){
					         return 0;
				              }




        return 0;
}

#include<stdio.h>
#include<math.h>
int main ()
{
    double add,sub,multi,div,a,b;
    int N;
    char ch;
    printf(" It's a normal calculating program made by Towfiqul Islam. \n\n                  \"fb.com\\towfiq.106\"");
    printf("\n\n\n\n Welcome to my calculator.\n\n\n Do you want to use my calculator? Press y/n as YES or NO.\n\n");
    ch=getchar();
    ch=toupper(ch);
    while(ch=='Y')
    {
        printf("\n\n Press:\n   1 for Addition,\n   2 for Subtraction,\n   3 for Multiplication and\n   4 for Division.\n\n\n");
        scanf("%d",&N);

        putch('\a');
        {
         printf("Input two number:\n");
         scanf("%lf \n %lf",&a,&b);

         if(N==1)
            {
             add=a+b;
             printf("The addition between %.2lf and %.2lf is %.2lf. Thank You.",a,b,add);}
        else
             {if(N==2)
                    {
                    sub=a-b;
                    printf("The subtraction between %.2lf and %.2lf is %.2lf. Thank You.",a,b,sub);}
                else
                      {if(N==3)
                        {
                        multi=a*b;
                        printf("The multiplication between %.2lf and %.2lf is %.2lf. Thank You.",a,b,multi);}
                      else
                             {if(N==4)
                                 {if(b==0)
                                            {printf("The division result is UNDEFINED.");}
                                        else
                                            {div=a/b;
                                            printf("The division between %.2lf and %.2lf is %.2lf. Thank You.",a,b,div);}}
                             else
                                  {printf("\n\n Wrong input. Thank you for using my calculating program.\n\n\n");}}}}}

                                  printf("\n\n\n\n\n  Let's use the calculator again.\n\n\n [ If you don't want to use it click close \(x\) button. ]\n\n\n\n");

    }

     while (ch=='N')
     {
         printf("\n\nThank You!\n\n");
         break;
     }
     while(ch!='N' && ch!='Y')
     {


         printf("\n\n DUMP!! Don't you understand English ? >_< \n\n");
         break;
     }
    getch();
    return 0;

}

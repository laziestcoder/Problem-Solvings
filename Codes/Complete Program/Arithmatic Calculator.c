#include<stdio.h>
#include<math.h>

int main ()

{
    char ch;
    printf(" It's a normal calculating program made by Towfiqul Islam. \n\n                  \"fb.com\\towfiq.106\"");
    printf("\n\n\n\n Welcome to my calculator.\n\n\n Do you want to use my calculator? Press y/n as YES or NO.\n\n");
    ch=getchar();
    ch=toupper(ch);
    if(ch=='Y')
        yes_function();
    else
        return 0;
}


int yes_function()

{
    float add,sub,multi,div,a,b;
    int N,choice;
    printf("\n\n Press:\n   1 for Addition,\n   2 for Subtraction,\n   3 for Multiplication and\n   4 for Division.\n\n\n");
    scanf("%d",&N);

    putch('\a');
    {
        printf("Input two number:\n");
        scanf("%lf \n %lf",&a,&b);

        if(N==1)
        {
            add=a+b;
            printf("The addition between %.2f and %.2f is %.2f. Thank You.",a,b,add);
        }
        else if(N==2)
        {
            sub=a-b;
            printf("The subtraction between %.2f and %.2f is %.2f. Thank You.",a,b,sub);
        }
        else if(N==3)
        {
            multi=a*b;
            printf("The multiplication between %.2f and %.2f is %.2f. Thank You.",a,b,multi);
        }
        else if(N==4)
        {
            if(b==0)
                {
                    printf("The division result is UNDEFINED.");
                }
            else
                {
                    div=a/b;
                    printf("The division between %.2f and %.2f is %.2f. Thank You.",a,b,div);
                }

        }
        else
        {
            printf("\n\nWrong input. Thank you for using my calculating program.\n\n\n");
        }
    }



printf("\n\nEnter Choice: 1. Continue  2. Exit\n\n\n");
scanf("%d",&choice);
if(choice==1)
{
    main();
}
if(choice==2)
{
    return 0;
}
return 0;
}

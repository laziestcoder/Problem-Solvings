#include <stdio.h>
#include <windows.h>
#include <math.h>
int main() //created by Amit
{
    int key;
    printf("Hello friends\n");
    printf("It's just a simple calculator\n");
    printf("Press 1 for Arithmetic calculator\n");
    printf("Press 2 for Trigonometric & Logical calculator\n");
    printf("Press 3 for Trigonometric Addition , Subtraction , Multiplication & Division\n");
    scanf("%d", &key);
    if(key == 1)
    {
        system("cls");//from dis part developed by shohag
        {
            float a, b;
            char key;
            printf("Enter two numbers:");

            scanf("%f%f", &a, &b);

            printf("1 for addition\n");
            printf("2 for subtraction\n");
            printf("3 for multiplication\n");
            printf("4 for division\n");

            scanf(" %c", &key);
            //not use "f"; use "c; use a space before %c,
            //Why? see here: http://gsamaras.wordpress.com/code/caution-when-reading-char-with-scanf-c/

            //use int for input; if you use char here, it capture the <enter> as a input!!!!

            if(key == '1')
            {
                printf("%f & %f is %f\n", a, b, a+b);
            }
            else if (key == '2')
            {
                printf("%f & %f is %f\n", a, b, a-b);
            }
            else if(key == '3')
            {
                printf("%f & %f is %f\n", a, b, a*b);
            }
            if(b == 0 && key == '4')
            {
                printf("Its undefined\n");
            }
            else if(key == '4')
            {
                printf("%f & %f is %f\n", a, b, a/b);
            }
            getch();
            //return 0; // use this at last of main() function
        }
    }
    if (key == 2)
    {
        system("cls");
        {
            double a, b, x;
            char key; //must not be a double or float for input variable
            //char s, c, t, l, p, r; //This not needed
            printf("Press s for sin\n");
            printf("Press c for cos\n");
            printf("Press t for tan\n");
            printf("Press l for log\n");
            printf("Press p for power\n");
            printf("Press r for square root\n");

            scanf(" %c", &key);

            if(key == 's')
            {
                printf("Enter the value of sin:\n");

                scanf("\n%lf", &a);
                // for get double input with scanf use "%lf"; not "%f".
                // http://stackoverflow.com/questions/19952200/scanf-printf-double-variable-c

                b = sin(a/57.2957795);

                printf("Ans: %f",b);
            }
            else if(key == 'c')
            {
                printf("Enter the value of cos:\n");
                scanf("\n%lf", &a);
                b = cos(a/57.2957795);
                printf("cos%.0f=%.2f", a, b);
            }
            else if(key == 't')
            {
                printf("Enter the value of tan:\n");
                scanf("\n%lf", &a);
                b = tan(a/57.2957795);
                printf("tan%.0f=%.2f", a, b);
            }
            else if(key == 'l')
            {
                printf("Enter the value of log:\n");
                scanf("\n%lf", &a);
                b = log10(a);
                printf("log%.0f=%.4f", a, b);
            }
            else if (key == 'p')
            {
                printf("Enter the base and power eg(2,3):\n");
                scanf("\n%lf", &a);
                scanf("\n%lf", &b);
                x = pow(a,b);
                printf("%.0f to the power %.0f = %.2f", a, b, x);
            }
            else if(key == 'r')
            {
                scanf("%lf", &a);
                b = sqrt(a);
                printf("root%.0f=%.2f", a, b);
            }
            getch();
            //return 0; \\end of shohag
        }
    }
    if (key ==3) //from here developed by shafee
        { system ("cls");
    {
        double a,b,c,d,e;
        int x;
        printf("For Addition , Subtraction , Multiplication & Division of 'sin' value and 'cos' value press 1 \n");
        printf("For Addition , Subtraction , Multiplication & Division of 'sin' value and 'tan' value press 2 \n");
        printf("For Addition , Subtraction , Multiplication & Division of 'cos' value and 'tan' value press 3 \n");
        scanf("%d",&x);
        if(x==1)
        {   system("cls");
        {
            int y;
            printf("For 'sin(value)+cos(value)' press 1\nFor 'sin(value)-cos(value)' press 2\nFor 'sin(value)*cos(value)' press 3\nFor 'sin(value)/cos(value)' press 4\nFor 'cos(value)-sin(value)' press 5\nFor 'cos(value)/sin(value)' press 6\n");
            scanf("%d",&y);
            if (y==1)
                {
            printf("Enter sin value\n");
            scanf("%lf",&a);
            printf("\nEnter cos value\n");
            scanf("%lf",&b);
            c=sin(a/57.2957795)+cos(b/57.2957795);// it always works with "radian " value , bt all time we use degree value , here we can input degree value cz degree value will converted to radian value division with 57.2957795 example if u input 90 it will convrted to (90/57.2957795)=1.570796327 and sin(1.570796327)=1 in radian scale
            printf("\n'sin(value)+cos(value)'=%f",c);
        }
        else if (y==2)
        {
            printf("Enter sin value\n");
            scanf("%lf",&a);
            printf("\nEnter cos value\n");
            scanf("%lf",&b);
            c=(sin(a/57.2957795)-cos(b/57.2957795));
            printf("\n'sin(value)-cos(value)'=%f",c);
        }
        else if (y==3)
        {
            printf("Enter sin value\n");
            scanf("%lf",&a);
            printf("\nEnter cos value\n");
            scanf("%lf",&b);
            c=(sin(a/57.2957795)*cos(b/57.2957795));
            printf("\n'sin(value)*cos(value)'=%f",c);
        }
        else if (y==4)
        {
            printf("Enter sin value\n");
            scanf("%lf",&a);
            printf("\nEnter cos value\n");
            scanf("%lf",&b);
            c=sin(a/57.2957795);
            d=cos(b/57.2957795);
            e=(c/d);
            if (d==0)
            {
                printf("Undefined");//divided er ta undefined diye dekhanor cesta korsilam bt hosche nah tai baki gula kori nai, tora dekhis

            }
            else{
            printf("\n'sin(value)/cos(value)'=%f",e);
        }}
        else if (y==5)
        {
            printf("Enter cos value\n");
            scanf("%lf",&b);
            printf("\nEnter sin value\n");
            scanf("%lf",&a);
            c=(cos(a/57.2957795)-sin(b/57.2957795));
            printf("\n'cos(value)-sin(value)'=%f",c);
        }
        else if (y==6)
        {
            printf("Enter cos value\n");
            scanf("%lf",&b);
            printf("\nEnter sin value\n");
            scanf("%lf",&a);
            c=(cos(a/57.2957795)/sin(b/57.2957795));
            printf("\n'cos(value)/sin(value)'=%f",c);
        }
        }
        }
        else if (x==2)
        {
            system("cls");
                    {
            int y;
            printf("For 'sin(value)+tan(value)' press 1\nFor 'sin(value)-tan(value)' press 2\nFor 'sin(value)*tan(value)' press 3\nFor 'sin(value)/tan(value)' press 4\nFor 'tan(value)-sin(value)' press 5\nFor 'tan(value)/sin(value)' press 6\n");
            scanf("%d",&y);
            if (y==1)
                {
            printf("Enter sin value\n");
            scanf("%lf",&a);
            printf("\nEnter tan value\n");
            scanf("%lf",&b);
            c=sin(a/57.2957795)+tan(b/57.2957795);
            printf("\n'sin(value)+tan(value)'=%f",c);
        }
        else if (y==2)
        {
            printf("Enter sin value\n");
            scanf("%lf",&a);
            printf("\nEnter tan value\n");
            scanf("%lf",&b);
            c=(sin(a/57.2957795)-tan(b/57.2957795));
            printf("\n'sin(value)-tan(value)'=%f",c);
        }
        else if (y==3)
        {
            printf("Enter sin value\n");
            scanf("%lf",&a);
            printf("\nEnter tan value\n");
            scanf("%lf",&b);
            c=(sin(a/57.2957795)*tan(b/57.2957795));
            printf("\n'sin(value)*tan(value)'=%f",c);
        }
        else if (y==4)
        {
            printf("Enter sin value\n");
            scanf("%lf",&a);
            printf("\nEnter tan value\n");
            scanf("%lf",&b);
            c=(sin(a/57.2957795)/tan(b/57.2957795));
            printf("\n'sin(value)/tan(value)'=%f",c);
        }
        else if (y==5)
        {
            printf("Enter tan value\n");
            scanf("%lf",&b);
            printf("\nEnter sin value\n");
            scanf("%lf",&a);
            c=(tan(a/57.2957795)-sin(b/57.2957795));
            printf("\n'tan(value)-sin(value)'=%f",c);
        }
        else if (y==6)
        {
            printf("Enter tan value\n");
            scanf("%lf",&b);
            printf("\nEnter sin value\n");
            scanf("%lf",&a);
            c=(tan(a/57.2957795)/sin(b/57.2957795));
            printf("\n'cos(value)/sin(value)'=%f",c);
        }
        }
        }
        else if (x==3)
        {
            system("cls");
                    {
            int y;
            printf("For 'cos(value)+tan(value)' press 1\nFor 'cos(value)-tan(value)' press 2\nFor 'cos(value)*tan(value)' press 3\nFor 'cos(value)/tan(value)' press 4\nFor 'tan(value)-cos(value)' press 5\nFor 'tan(value)/cos(value)' press 6\n");
            scanf("%d",&y);
            if (y==1)
                {
            printf("Enter cos value\n");
            scanf("%lf",&a);
            printf("\nEnter tan value\n");
            scanf("%lf",&b);
            c=cos(a/57.2957795)+tan(b/57.2957795);
            printf("\n'cos(value)+tan(value)'=%f",c);
        }
        else if (y==2)
        {
            printf("Enter cos value\n");
            scanf("%lf",&a);
            printf("\nEnter tan value\n");
            scanf("%lf",&b);
            c=(cos(a/57.2957795)-tan(b/57.2957795));
            printf("\n'cos(value)-tan(value)'=%f",c);
        }
        else if (y==3)
        {
            printf("Enter cos value\n");
            scanf("%lf",&a);
            printf("\nEnter tan value\n");
            scanf("%lf",&b);
            c=(cos(a/57.2957795)*tan(b/57.2957795));
            printf("\n'cos(value)*tan(value)'=%f",c);
        }
        else if (y==4)
        {
            printf("Enter cos value\n");
            scanf("%lf",&a);
            printf("\nEnter tan value\n");
            scanf("%lf",&b);
            c=(cos(a/57.2957795)/tan(b/57.2957795));
            printf("\n'cos(value)/tan(value)'=%f",c);
        }
        else if (y==5)
        {
            printf("Enter tan value\n");
            scanf("%lf",&b);
            printf("\nEnter cos value\n");
            scanf("%lf",&a);
            c=(tan(a/57.2957795)-cos(b/57.2957795));
            printf("\n'tan(value)-cos(value)'=%f",c);
        }
        else if (y==6)
        {
            printf("Enter tan value\n");
            scanf("%lf",&b);
            printf("\nEnter cos value\n");
            scanf("%lf",&a);
            c=(tan(a/57.2957795)/cos(b/57.2957795));
            printf("\n'tan(value)/cos(value)'=%f",c);
        }
        }
        }
        }
    }
    getch();
    return 0;  // from here u can develop , make it advance level

}

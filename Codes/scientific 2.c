#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
    int key;
    printf("Hello friends\n");
    printf("It's just a simple calculator\n");
    printf("Press 1 for Arithmetic calculator\n");
    printf("Press 2 for Trigonometric & Logical calculator\n");
    scanf("%d", &key);
    if(key == 1){
        system("cls");
        {
            float a, b, key;
            printf("Enter two numbers:");
            scanf("%f%f", &a, &b);
            printf("1 for addition\n");
            printf("2 for substraction\n");
            printf("3 for multiplication\n");
            printf("4 for division\n");
            scanf("%f", &key);
            if(key == 1){
                printf("%f & %f is %f\n", a, b, a+b);
            }
            else if (key == 2){
                printf("%f & %f is %f\n", a, b, a-b);
            }
            else if(key == 3){
                printf("%f & %f is %f\n", a, b, a*b);
            }
            if(b == 0 && key == 4){
                printf("Its undefined\n");
            }
            else if(key == 4){
                printf("%f & %f is %f\n", a, b, a/b);
            }
            getch();
            return 0;
                  }
    }
            if (key == 2){
                system("cls");
                {
                    double a, b, c, key;
                    char s, c, t, l, p, r;
                    printf("Press s for sin\n");
                    printf("Press c for cos\n");
                    printf("Press t for tan\n");
                    printf("Press l for log\n");
                    printf("Press p for power\n");
                    printf("Press r for square root\n");
                    scanf("%f", &key);
                    if(key == s){
                        printf("Enter the value of sin:\n");
                        scanf("\n%f", &a);
                        b = sin(a);
                        printf("sin%.0f=%.2f", a, b);
                    }
                    else if(key == c){
                        printf("Enter the value of cos:\n");
                        scanf("\n%f", &a);
                        b = cos(a);
                        printf("cos%.0f=%.2f", a, b,);
                    }
                    else if(key == t){
                        printf("Enter the value of tan:\n");
                        scanf("\n%f", &a);
                        b = tan(a);
                        printf("tan%.0f=%.2f", a, b);
                    }
                    else if(key == l){
                        printf("Enter the value of log:\n");
                        scanf("\n%f", &a);
                        b = log10(a);
                        printf("log%.0f=%.4f", a, b);
                    }
                    else if (key == p){
                        printf("Enter the base and power eg(2,3):\n");
                        scanf("\n%f", &a);
                        scanf("\n%f", &b);
                        c = pow(a,b);
                        printf("%.0f to the power %.0f = %.2f", a, b, c);
                    }
                    else if(key == r){
                        scanf("%f", &a);
                        b = sqrt(a);
                        printf("root%.0f=%.2f", a, b);
                    }
                    getch();
                    return 0;
}

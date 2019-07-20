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
            float a, b;
            int key;
            printf("Enter two numbers:");
            scanf("%f%f", &a, &b);
            printf("1 for addition\n");
            printf("2 for subtraction\n");
            printf("3 for multiplication\n");
            printf("4 for division\n");
            scanf("%d", &key);
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
                {
                    float a, b, x;
                    int key;
                    printf("Press 1 for sin\n");
                    printf("Press 2 for cos\n");
                    printf("Press 3 for tan\n");
                    printf("Press 4 for log\n");
                    printf("Press 5 for power\n");
                    printf("Press 6 for square root\n");
                    scanf("%d", &key);
                    if(key ==1){
                        printf("Enter the value of sin:\n");
                        scanf("\n%f", &a);
                        b = sin(a);
                        printf("sin%.0f=%.2f",a, b);
                    }
                    else if(key ==2){
                        printf("Enter the value of cos:\n");
                        scanf("\n%f", &a);
                        b = cos(a);
                        printf("cos%.0f=%.2f", a, b);
                    }
                    else if(key == 3){
                        printf("Enter the value of tan:\n");
                        scanf("\n%f", &a);
                        b = tan(a);
                        printf("tan%.0f=%.2f", a, b);
                    }
                    else if(key == 4){
                        printf("Enter the value of log:\n");
                        scanf("\n%f", &a);
                        b = log10(a);
                        printf("log%.0f=%.4f", a, b);
                    }
                    else if (key == 5){
                        printf("Enter the base and power eg(2,3):\n");
                        scanf("\n%f", &a);
                        scanf("\n%f", &b);
                        x = pow(a,b);
                        printf("%.0f to the power %.0f = %.2f", a, b, x);
                    }
                    else if(key == 6){
                        scanf("%f", &a);
                        b = sqrt(a);
                        printf("root%.0f=%.2f", a, b);
                    }
                    getch();
                    return 0;
}
}
}

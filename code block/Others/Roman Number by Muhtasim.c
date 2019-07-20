#include<stdio.h>

int main()

{
    int num,num1,i=1000,j=500,a,b;

    printf("Enter a number : ");
    scanf("%d",&num);
    num1=num;
    printf("\n\nYour number in roman is : ");

    for( ; num1!=0 && num1!=4 && num1!=9;)

            {
            if(num1<=3)
            {
            printf("I");
            num1--;
            continue;
            }

                if(num1>=5)
                {
                    if(num1/i>=1 && i>j)
                        {
                            if(i==1000){
                            printf("M");}
                                if(i==100){
                                printf("C");}
                                    if(i==10){
                                    printf("X");}
                                    num1=num1-i;
                                    continue;
                        }

                        a=(i*90/100);
                        i=i/10;
                        if(num1/a>=1)
                        {
                            if(a==900){
                            printf("CM");}
                                if(a==90){
                                printf("XC");}
                                num1=num1-a;
                                continue;
                                }

                        a=a/10;
                        if(num1/j>=1)
                        {
                            if(j==500){
                            printf("D");}
                                if(j==50){
                                printf("L");}
                                    if(j==5){
                                    printf("V");}
                                    num1=num1-j;
                                    continue;
                        }

                        b=(j*40/100);
                        j=j/10;
                        if(num1/b>=1)
                        {
                            if(b==400){
                            printf("CD");}
                                if(b==40){
                                printf("XL");}
                                num1=num1-b;
                                continue;
                        }

                        b=b/10;
                        }
                        }
                        if(num%10==4 || num1%10==4){
                        printf("IV");}
                            if(num%10==9 || num1%10==9){
                            printf("IX");}

            getch();
    return 0;
}

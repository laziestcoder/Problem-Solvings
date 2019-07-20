#include<stdio.h>

int main()
{
    float otpay;
    int employee=1,hour;

    while(employee<=10)
    {
        printf("\nEnter no. of hours worked: ");
        scanf("%d",&hour);

        if(hour>=40)
        {
            otpay=(hour-40)*12;
            printf("\nNo of hours worked=%d\nOvertime pay=Tk%f",hour,otpay);
        }
        else
        {

            printf("No of hours worked (%d) is less than 40 hours.\nHence no overtime pay",hour);
        }
        employee++;
    }
    return 0;
}

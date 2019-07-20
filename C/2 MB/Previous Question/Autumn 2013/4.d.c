#include<stdio.h>

int main()
{
    int d,m,y;
    scanf("%d-%d-%d",&d,&m,&y);

    switch(m)
    {
        case 1: printf("January");
            break;
        case 2: printf("February");
            break;
        case 3: printf("March");
            break;
        case 4: printf("April");
            break;
        case 5: printf("May");
            break;
        case 6: printf("June");
            break;
        case7: printf("July");
            break;
        case 8: printf("August");
            break;
        case 9: printf("September");
            break;
        case 10: printf("October");
            break;
        case 11: printf("November");
            break;
        case 12: printf("December");
            break;
    }
    printf("%d",d);

    if(d==1||d==21||d==31)
        printf("st");
    else if(d==2||d==22)
        printf("nd");
    else if(d==3||d==23)
        printf("rd");
    else printf("th");

    printf(",%d",y);

    return 0;

}

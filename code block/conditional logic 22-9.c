#include<stdio.h>

int main()

{
    int n;
    printf(" Input an integer:\n\n");
    scanf("%d", &n);
    if(n>=0){
        printf("\n\n The number is positive\n");
    }
    else {
        printf("The number is negative\n");
    }
    getch();
    return 0;

}

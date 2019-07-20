#include <stdio.h>

int main()
{
    int score;

    printf("Enter your score: ");
    scanf("%d",&score);

    if(score>=70 && score<=100)
        printf("Grade A");

    if(score>=55 && score<=69)
        printf("Grade B");

    if(score>=45 && score<=54)
        printf("Grade C");

    if(score>=40 && score<=44)
        printf("Grade D");

    if(score>=00 && score<=39)
        printf("Grade F");

}

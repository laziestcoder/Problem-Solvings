#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5, agg_marks;

    printf("Enter the marks obtained in 5 different subjects: ");

    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    printf("The aggregate marks: %f", agg_marks = sub1 + sub2 + sub3 + sub4 + sub5);

    return 0;
}

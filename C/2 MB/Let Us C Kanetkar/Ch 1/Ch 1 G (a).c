#include <stdio.h>

int main()
{
    float gross_salary, basic_salary;

    printf("Enter the basic salary: ");

    scanf("%f", &basic_salary);

    gross_salary = basic_salary + basic_salary * .40 + basic_salary * .20;

    printf("The gross salary is: %f", gross_salary);

    return 0;
}

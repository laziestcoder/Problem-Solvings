/* program to calculate the area of a circle */     /* TITLE (COMMENT) */

#include <stdio.h>                                  /* LIBRARY FILE ACCESS */

main()                                              /* FUNCTION HEADING */
{
    float radius, area;                     /* VARIABLE DECLARATIONS */

    printf("Radius = ? ");                  /* OUTPUT STATEMENT (PROMPT) */
    scanf("%f", &radius);                   /* INPUT STATEMENT */
    area = 3.14159 * radius * radius;       /* ASSIGNMENT STATEMENT */
    printf("Area = %f", area);              /* OUTPUT STATEMENT */
}

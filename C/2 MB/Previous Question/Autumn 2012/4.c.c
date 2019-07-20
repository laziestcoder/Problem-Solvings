#include <stdio.h>

void main()
{
    int a = 20, b = 10, c, d;
    c = ++a - b;
    d = b++ +a;
    printf("a= %d b = %d c = %d d= %d\n", a,b,c,d);
    printf("%d\n",(c<d)? c: a % b);
    printf("%f", (float)(a/b));
}

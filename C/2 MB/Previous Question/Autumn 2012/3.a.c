#include <stdio.h>

int main()
{
    int x =-2;
    float y=1;

    if( x >= 0)
        if ( x > 0)
            y = x + 1;
    else
        y = x - 1;

    printf("%f", y);
}

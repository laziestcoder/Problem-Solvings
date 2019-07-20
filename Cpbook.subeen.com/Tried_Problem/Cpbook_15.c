// Cpbook: 15
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int inum;
    char buffer [256];
    scanf("%d",&n);
    fgets (buffer, 256, stdin);
    inum = atoi (buffer);
    while(n--)
    {
        if(inum == 0 || inum % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}

#include<stdio.h>
#include<string.h>

int main ()
{
    unsigned long long int c=0;
    char s='0';

    while((scanf("%c",&s))!=EOF)
    {
        if(s=='"')
            {
                c++;
                if(c%2==1)
                    printf("``");
                else  if(c%2==0)
                    printf("''");
            }
            else
                printf("%c",s);


    }
    return 0;
}

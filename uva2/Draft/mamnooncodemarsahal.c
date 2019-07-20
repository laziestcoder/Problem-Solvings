#include <stdio.h>
int main ()
{
    int i, cs, a, b;
    char ch[1]; //x = '+', y = '-', z = '*', k = '/', j = '%';
    scanf("%d", &cs);
    for(i = 1; i <= cs; i++)
    {
        scanf("%d%d", &a, &b);
        scanf("%s", ch);

        if(ch[0] == '+')
        {
            printf("Case %d: %d\n", i, a+b);
        }
        else if(ch[0] == '-')
        {
            printf("Case %d: %d\n", i, a-b);
        }
        else if(ch[0] == '*')
        {
            printf("Case %d: %d\n", i, a*b);
        }
        else if(ch[0] == '/')
        {
            printf("Case %d: %d\n", i, a/b);
        }
        else if(ch[0] == '%')
        {
            printf("Case %d: %d\n", i, a%b);
        }
        //else
          printf("Case %d: %d %d %c\n",cs,a,b,ch);
    }
    return 0;
}

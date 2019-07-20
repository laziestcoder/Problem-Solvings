// Accepted, 12577 - Hajj-e-Akbar
#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    char str[100];
    while(1)
    {
        gets(str);
        if(str[0]=='*')
            break;
        else if(str[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",++i);
        else
            printf("Case %d: Hajj-e-Asghar\n",++i);
    }
    return 0;
}


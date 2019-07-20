#include<bits/stdc++.h>
using namespace std;
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

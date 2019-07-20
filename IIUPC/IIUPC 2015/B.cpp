#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i,x,j,l;
    char s[55];
    cin >> t;
    for(i=1; i<=t; i++)
    {
        scanf("%s",s);
        x=0;
        l=strlen(s);
        for(j=0; j<l; j++)
        {
            if(s[j]=='-' && s[j+1]!='B' && s[j+2]!='B' && s[j-1]!='S' && s[j+1]!='S')
             x++;
        }
        printf("Case %d: %d\n",i,x);
    }


    return 0;
}

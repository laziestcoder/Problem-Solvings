#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char s[55];
    int t,min,eq,b,i,j,l;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin>> s;
        l=strlen(s);
        b=0; min=0; eq=0;
        for(j=0; j!='\n'; j++ )
        {
            if(s[j]=='<' or s[j]=='>')
                b=1;
            if(s[j]=='=')
                {
                    eq++;
                if(s[j-1]!='=')
                 min=0;
                }
            else if(s[j]=='-')
            {
                min++;
                if(s[j-1]!='=')
                 eq=0;
            }
        }
        if(b>0)
        {
            if(min>eq)
            printf("Case %d: %d",i,min+b);
            else
            printf("Case %d: %d",i,eq+b);
        }
        else
        printf("Case %d: -1",i);

        printf("\n");
    }

    return 0;
}

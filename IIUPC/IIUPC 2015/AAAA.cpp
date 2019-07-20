
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
        for(j=0; j<l; j++ )
        {
            if(s[j]=='<' )
                {
                    b=1;

                while(s[j]=='=' )
                    {
                    eq++;
                    j++

                    }


                    else if(s[j]=='-')
                    {
                        min++;
                    }
                    }
                else if(s[j]=='>')
                {
                    while(s[j]==)

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

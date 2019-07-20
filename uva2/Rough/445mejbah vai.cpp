#include<bits/stdc++.h>
using namespace std;

int main ()
{
	/// freopen("445in.txt", "r", stdin);
	/// freopen("445out.txt", "w", stdout);

    int x=0,i,j,p=0,t=0;
    char s[140];
    while (gets(s))
    {
        if(t>0)
         printf("\n");

        p=strlen(s);
        for(j=0; j<p; j++)
        {

            if(s[j]>='0' && s[j]<='9' )
                x=x+(s[j]-'0');
            else
            {
                if(x==0)
                    x=1;
                for(i=1; i<=x; i++)
                {
                    if (s[j]=='b')
                        printf(" ");
                    else if (s[j]>='A' && s[j]<='Z')
                        printf("%c",s[j]);
                    else if(s[j]=='*')
                        printf("*");
                    else if(s[j]=='!')
                        printf("\n");
                }
                x=0;
            }
        }
        printf("\n");
        t++;
    }
    return 0;
}

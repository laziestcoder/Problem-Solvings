#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int t,i,j=0;
    char x[6], n[9999][20];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        scanf("%s",x);
        if(x[0]=='S')
        {
            if(j<0)
             j=0;
            j=j+1;
        scanf("%s",n[j]);
        }

        if(x[0]=='T')
        {
            if(j<=0)
            printf("Not in a dream\n");
        else
        printf("%s\n",n[j]);
        }
        if(x[0]=='K')
         j=j-1;

    }
        return 0;
}


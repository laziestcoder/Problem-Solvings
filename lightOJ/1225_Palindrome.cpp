#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        i++;
        char n[20];
        int j,k,f=0;
        scanf("%s",n);
            int l=strlen(n);
        for(j=0, k=l-1 ; j<l/2 ;  k--, j++)
        {
            if(n[j]!=n[k])
            {
                f=1;
                break;
            }
        }

        if(f==0)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }

    return 0;
}

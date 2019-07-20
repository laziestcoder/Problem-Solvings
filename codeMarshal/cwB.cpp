
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[1000000],i,c=0,t,p,j;
    while(scanf("%d",&t)==1)
    {
        c++;
        if(t==0)
            return 0;
        else
        {

            for(i=0; i< t; i++)
            {
                cin >>  a[i];

            }
            p=0;
            for(j=1; j<t-1; j++)
            {
                if(a[j]>0 && a[j]> a[j+1] && a[j]> a[j-1] )
                    p++;
            }

            if(p>0)
                cout << "Case " << c << ": " << p << "\n";
            else
                cout << "Case " << c << ": " << p << "\n" ;

        }
    }

    return 0;
}

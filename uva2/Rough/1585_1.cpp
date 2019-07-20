#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char str[85];
    int t,i,l,m=0,k,j;
    cin >> t;
    for(i=1; i<=t; i++)
    {

        cin>> str;
        l=strlen(str);
        k=1;
        m=0;
        for(j=0; j<l; j++)
        {
            if(str[j]=='o' || str[j]=='O' )
            {
                m=m+k;
                k++;
            }
            else
               {
                   k=1;
               }

        }



    cout << m << endl;

    }


    return 0;
}



#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i=0,a,b,c=0;
    cin>>t;
    while(t--)
    {
        c++;
        cin>>a>>b;
        printf("Case %d:\n",c);
        char m[26];
        for(i=0; i<a;i++)
            m[i]='A'+i;
        int k=0,j=0;
       /***/
        do
        {
            j=0;
            k++;
            while(1)
            {
                cout << m[j];
                j++;
                if(j==a)
                    break;
            }
            cout<<endl;
            if(k==b)
                break;
        }while ( next_permutation(m,m+a));   /***/

    }
    return 0;
}

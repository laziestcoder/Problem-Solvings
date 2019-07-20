#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i,n,x,j;
    char s[10000];
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        x=0;
        getchar();
        for(j=1; j<= n; j++)
        {

         gets(s);
         if(s[0]=='I' && s[1]=='I' && s[2]=='U' && s[3]=='C')
                x++;
        }
        cout<< x;
        cout << endl;

    }

    return 0;
}

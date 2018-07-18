#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i,j,l;
    char n[105],ch;
    cin>> t;
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(n);
        l=strlen(n);
        cout<<"Case "<< i<<": ";
        for(j=0; j<l;j++)
        {
           putchar(toupper(n[j]));
        }
        cout<<"\n";
    }
    return 0;
}

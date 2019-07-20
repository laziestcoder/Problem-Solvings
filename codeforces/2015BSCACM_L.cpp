#include<bits/stdc++.h>
using namespace std;
int main ()
{
   while(1)   {
       int s=0,f=0,i,m;
    string st;
    cin>>m;
    cin>>st;
    for(i=0; i<m; i++)
    {
        if((st[i]==')' && st[i+1]==':' ) || (st[i]==':' && st[i+1]=='('))
            f++;
        else if((st[i]==':' && st[i+1]==')' ) ||(st[i]=='(' && st[i+1]==':' ))
            s++;
    }
    if(s > f)
        cout<<"HAPPY\n";
    else if(s<f)
    cout<<"SAD\n";
    else if(s==f)
        cout<<"BORED\n";

   }
    return 0;
}

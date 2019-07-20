#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string n;
    int s=0;
    cin>>n;
    if(n[0]!='a' && n[0]!='h' && n[1]!='1' && n[1]!='8' )
    s=8;
    else{

        if( (n[1]=='1' || n[1]=='8' ) && (n[0]!='a' && n[0]!='h') )
        s=5;
        else if( (n[1]!='1' && n[1]!='8' ) && ( n[0]=='a' || n[0]=='h') )
        s=5;
        else
            s=3;
    }
    cout<<s<<endl;
    return 0;
}

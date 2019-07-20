#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,j,t,cf,mf,x=0;
    char s[105];
    cin >> t;
    x=0;
    for(i=1; i<=t ; i++)
    {
        cin>> s >> cf >> mf;
        if(cf>0 || mf >=30 )
            {
                cout<< s << "\n" ;
                x=1;
            }



    }
    if(x==0)
            cout << "Sorry for being rude!\n";
            return 0;
}

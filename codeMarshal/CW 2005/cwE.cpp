#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,c=0,d=0,x;
    long long int sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        d=0;
        c=0;
        sum=n*n;
        for(i=1; i<= 9 ; i++)
        {
            x=sum%10;
            sum=sum/10;
            if(x==i && d==0)
             c++;
             else
                break;
        }
        if(d==0)
         cout << c <<"\n";
        else
            cout << "0\n";

    }

    return 0;
}


/***
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    while(cin>>n)
    {
        if( n < 9 ) cout << 0 <<endl; /// 9 digit theke choto kono number nai zar square er last e 987654321 takbe
        else
        {
            if( n == 9 ) cout << 8 << endl; /// 9 digit er 8 ta number ase zader square er last e 987654321 takbe
            else
            {
                cout << 72; /// 10 digit hole 1-9 porjonto 9 ta number
                /// 9 digit er age mane left theke 10 no position e boste parbe
                /// tai ans 9*8 = 72
                for( int i = 10; i < n; i++ ) cout << 0;	/// pore proti ek digit barle 10 gun barbe
                cout << endl;
            }
        }
    }
}

**/


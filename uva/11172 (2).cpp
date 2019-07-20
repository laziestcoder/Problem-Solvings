///This is a comment
///https://uva.onlinejudge.org/external/100/11172.pdf
/// UVA Problem 11172

#include<bits/stdc++.h> /// universal header file
using namespace std;
int main ()
{
    ///freopen("in.txt","r",stdin); /// it takes input from a file called in.txt . This is for testing the program.
    int i,t,a,b; /// declaring variable using int because n and t is less than or equal 2^32.
    ///for more information please search for int and long long
    cin>>t; /// taking test case number or total set of input as input
    for(i=1; i<=t; i++) ///using a loop from 1 to t to take input for t times
    {
        cin>>a>>b;
        if(a<b)
        {
            cout<<'<'<<endl;
        }
        else if(a>b)
        {
            cout<<'>'<<endl;
        }
        else
        {
            cout<<'='<<endl;
        }

    }

    return 0;
}

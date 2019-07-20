///This is a comment
///https://uva.onlinejudge.org/external/100/10055.pdf
/// UVA Problem 10055

#include<bits/stdc++.h> /// universal header file
using namespace std;
int main ()
{
    ///freopen("in.txt","r",stdin); /// it takes input from a file called in.txt . This is for testing the program.
    long long int n,t; /// declaring variable using long long int because n and t is less than or equal 2^32.
    ///for more information please search for int and long long
    while(cin>>n>>t && EOF )  /// infinite loop until EOF = End Of File
    {
        if(n>=t) /// find the greater one
        {
            cout<<n-t<<endl;
        }
        else
        {
            cout<<t-n<<endl;
        }
    }
    return 0;
}

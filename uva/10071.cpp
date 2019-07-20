///This is a comment
///https://uva.onlinejudge.org/external/100/10071.pdf
/// UVA Problem 10071

#include<bits/stdc++.h> /// universal header file
using namespace std;
int main ()
{
    ///freopen("in.txt","r",stdin); /// it takes input from a file called in.txt . This is for testing the program.
    int v,t; /// declaring variable using int because v and t is less than or equal 200.
    ///for more information please search for int and long long
    while(cin>>v>>t && EOF )  /// infinite loop until EOF = End Of File
    {
        cout<<v*t*2<<endl; /// d= v*t. Twice on that time  t*2. So d = 2*v*t
    }
    return 0;
}

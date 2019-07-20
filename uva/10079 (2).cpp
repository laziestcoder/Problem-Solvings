///This is a comment
///https://uva.onlinejudge.org/external/100/10079.pdf
/// UVA Problem 10079

#include<bits/stdc++.h> /// universal header file
using namespace std;
int main ()
{
    long long int n; /// declaring variable using long long int because n is less than or equal 2*10^8.
    ///for more information please search for int and long long
    while(1)  /// infinite loop
    {
        cin>>n; /// input the value of n
        if(n<0)  /// check if n is less than 0 or negative number
        {
            return 0; /// if n is negative terminate the program
        }
        cout<<((n*(n+1))/2)+1<<endl; /// using formula (1+2+3+...+n)+1 = {n*(n+1)/2} + 1
        /// if we use loop it will take more time to get the result
        /// endl is used for a newline. It is compulsory for every output against every input or case
        /// best case 0 , worst case 210000000
    }
    return 0;
}

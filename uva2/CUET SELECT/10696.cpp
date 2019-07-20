#include<bits/stdc++.h>
using namespace std;
long long int f(int y)
{
    int x;
    if (y<=100)
        return (f(f(y+11)));
    if(y>=101)
        return (f(y-10));
}
int main ()
{
    int n,sum;
    while(1)
    {
        cin >> n;
        sum=0;
        if(n==0)
            return 0;
        else if(n<=100)
            sum=f(n);
        else if(n>=101)
            sum=f(n);



        if(n>=101)
             cout<< "f91(" << n <<") = " << sum << endl ;
        else if(n<=100)
             cout<< "f91(" << n <<") = " << sum << endl ;

    }
    return 0;
}

#include<iostream>
using namespace std;

namespace one
{
    int a=5,b=6;
}


int main()
{
        using namespace one;
        cout<<"a in one="<<a<<'\n';
        cout<<"b in one="<<b<<'\n';
        return 0;
}

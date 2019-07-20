#include<iostream>
using namespace std;

namespace one
{
    int a=5,b=6;
}

namespace two
{
    int a=7,b=8;
}

int main()
{
        {
        using namespace one;
        cout<<"a in one="<<a<<'\n';
        cout<<"b in one="<<b<<'\n';
        }

        {
        using namespace two;
        cout<<"a in two="<<a<<'\n';
        cout<<"b in two="<<b<<'\n';
        }
        return 0;
}

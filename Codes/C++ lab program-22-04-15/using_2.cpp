#include<iostream>
using namespace std;

namespace one
{
    int a=5,b=6;
}

void f1()
{
    //cout<<"In f(): "<<a;

    using namespace one;
    cout<<"In f():a= "<<a;

}


int main()
{
        using namespace one;
        cout<<"a in one="<<a<<'\n';
        cout<<"b in one="<<b<<'\n';
        f1();
        return 0;
}

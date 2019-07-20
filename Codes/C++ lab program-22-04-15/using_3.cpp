#include<iostream>
using namespace std;

namespace one
{
    int a=5,b=6;
}

using namespace one;

void f1()

{
    //using namespace one;
    cout<<"In f1():a= "<<a;

}


int main()
{
        //using namespace one;
        cout<<"a in one="<<a<<'\n';
        cout<<"b in one="<<b<<'\n';
        f1();
        return 0;
}

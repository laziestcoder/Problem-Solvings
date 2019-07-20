// Generic Function/Template Function
#include<iostream>
using namespace std;

template<typename t1,typename t2>
void func(t1 a,t2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    func(10,"hi");
    func(0.33,10L); // 10 is Long
    return 0;
}

// Generic Function/Template Function
#include<iostream>
using namespace std;

template<typename w>

void func(w a)
{
    cout << "in generic" << endl;
    cout << a << endl;
}

void func(int a)
{
    cout << "in non generic" << endl;
    cout << a << endl;
}

int main()
{
    func("hello");
    func(13.2);
    func('x');
    func(12);
    return 0;
}

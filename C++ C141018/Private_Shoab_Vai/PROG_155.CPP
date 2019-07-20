#include<iostream>
using namespace std;

void func(int x)
{
    cout << "inside function\n";
    if(x!=0)
        throw x;
}

int main()
{
    cout << "start\n";
    try
    {
        cout << "inside try block\n";
        func(0);
        func(1);
        func(2);
    }
    catch(int i)
    {
        cout << i << endl;
    }
    return 0;
}

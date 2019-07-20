#include<iostream>
using namespace std;

int main()
{
    cout << "start\n";
    try
    {
        cout << "one\n";
        throw 3.1416;
        cout << "two\n";
    }
    catch(char ch)
    {
        cout << ch;
    }
    return 0;
}

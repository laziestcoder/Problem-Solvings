// Exception Handling, P: 388
#include<iostream>
using namespace std;

int main()
{
    cout << "start\n"; // start
    try
    {
        cout << "one\n"; // one
        throw 5;
        cout << "two\n"; // print hobe na
    }
    catch(int x)
    {
        cout << x; // 5
    }
    return 0;
}

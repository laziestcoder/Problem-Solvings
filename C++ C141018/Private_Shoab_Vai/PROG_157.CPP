// Multiple Catch
#include<iostream>
using namespace std;

int main()
{
    cout << "start\n";
    try
    {
        cout << "inside try block\n";
        throw 10;
        cout << "Hello\n";
    }
    catch(int i) // 10 catch korbe
    {
        cout << "got 1: " << i << endl;
    }
    catch(double d) // kichu catch korbe na
    {
        cout << "got 2: " << d << endl;
    }
    return 0;
}

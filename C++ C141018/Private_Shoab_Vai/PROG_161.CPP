// Rethrow
#include<iostream>
using namespace std;

int main()
{
    cout << "start\n";
    try // nested try catch
    {
        cout << "outer try block\n";
        try
        {
            cout << "inner try block\n";
            throw 10;
        }
        catch(int i)
        {
            cout << "inner catch: " << i << endl;
            throw i; // Rethrow, ja catch kora joyeche tai abar throw korbe
        }
    }
    catch(int j)
    {
        cout << "outer catch: " << j << endl;
    }
    return 0;
}

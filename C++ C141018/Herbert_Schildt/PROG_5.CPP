#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter keys, x to stop.\n";
    do {
        cout << ": ";
        cin >> ch;
    }   while (ch !='x');

    return 0;
}

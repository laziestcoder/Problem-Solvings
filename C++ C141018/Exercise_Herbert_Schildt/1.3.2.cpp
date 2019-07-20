#include <iostream>
using namespace std;

int main()
{
    float inch,feet;
    do {
        cin >> feet;
        inch = feet * 12;
        cout << inch << "\n";
    } while(feet != 0);
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i;
    float f;
    char s[80];

    cout << "Enter an integer, float, and string: ";
    cin >> i >> f >> s;
    cout << "Here`s your data: ";
    cout << i << ' ' << f << ' ' << s;

    return 0;
}

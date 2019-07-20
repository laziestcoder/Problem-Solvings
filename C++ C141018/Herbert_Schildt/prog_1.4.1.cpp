/*This is a C-like comment.

This program determines whether
an integer is odd or even.*/
#include <iostream>
using namespace std;

int main()
{
    int num;    // this is a C++ single-line comment

    // read the number
    cout << "Enter number to be tested: ";
    cin >> num;

    // see if even or odd
    if((num%2)==0) cout << "Number is even\n";
    else cout << "Number is odd\n";

    return 0;
}

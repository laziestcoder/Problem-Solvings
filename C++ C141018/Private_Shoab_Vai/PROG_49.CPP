// Example of Ambiguity: P: 185
// This program has an error for Ambiguity
#include<iostream>
using namespace std;

float f(float i)
{
    return i/2.0;
}

double f(double i)
{
    return i/3.0;
}

int main()
{
    float x = 10.09;
    double y = 10.09;
    cout << f(x) << endl;
    cout << f(y) << endl;
    cout << f(10) << endl;  // Ambiguity
    return 0;
}

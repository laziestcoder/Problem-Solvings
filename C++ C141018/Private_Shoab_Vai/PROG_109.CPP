#include<iostream>
using namespace std;

int main()
{
    int a = -13;
    cout.width(5);
    cout.setf(ios::internal,ios::adjustfield); // Space between +ve/-ve sign and number
    //cout.fill('*');
    cout << a;
    return 0;
}



#include<iostream>
using namespace std;

int main()
{
    cout.width(10);
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield); // Left justification
    cout << "IIUC";
    return 0;
}


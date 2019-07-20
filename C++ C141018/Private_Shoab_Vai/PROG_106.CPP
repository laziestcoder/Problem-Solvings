#include<iostream>
using namespace std;

int main()
{
    int i;
    cout.setf(ios::showpos); // (+) sign dekhabe
    for(i=100;i<=1000;i=i+100)
        cout << i << endl;
    return 0;
}

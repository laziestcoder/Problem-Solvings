// Friend Function
#include<iostream>
using namespace std;
class myclass
{
    int i;
public:
    friend int main(); // main() function can be made friend function
};
int main()
{
    myclass ob;
    cin >> ob.i;
    cout << ob.i;
    return 0;
}

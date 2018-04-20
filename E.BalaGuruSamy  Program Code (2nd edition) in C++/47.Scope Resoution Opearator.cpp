#include<iostream> //SCOPE RESOLUTION OPERATOR-(Page-47)
using namespace std;

int m = 10;


int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;

        cout << "We are in inner block \n";
        cout << "k=" << k << endl;
        cout << "m=" << m << endl;
        cout << "::m=" << ::m << endl;
    }
cout << "\nWe are in outer Block" << endl;
cout << "m=" << m << endl;
cout << "::m=" << ::m <<endl;

return 0;
}

//Balagurusamy Ch-6 Page: 148, Class With Constructors
#include<iostream>

using namespace std;

class integer
{
    int m,n;
public:
    integer(int, int);  //constructor declared

    void display(void)
    {
        cout << "m = " << m << "\n";
        cout << "n = " << n << "\n";
    }
};

integer :: integer(int x, int y)    //constructor defined
{
    m = x; n = y;
}
int main()
{
    integer int1(0,100);    //constructor called implicitly

    integer int2 = integer(25, 75); //constructor called explicitly

    cout << "\nOBJECT1"<< "\n";
    int1.display();

    cout << "\nOBJECT2" << "\n";
    int2.display();

    return 0;
}

#include <iostream> //152.OVERLOADING UNARY OPERATOR
using namespace std;

class RANA
{
    int x;
    int y;
    int z;

public:
    void getdata(int a,int b,int c);
    void display();
    void operator-();
};

void RANA :: getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}

void RANA :: display()
{
    cout << x <<" "<< y <<" " << z << endl;
}

void RANA :: operator-()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    RANA S;
    S.getdata(10,-20,30);
    cout << " S: ";
    S.display();

    -S;
    cout << "-S: ";
    S.display();
return 0;
}

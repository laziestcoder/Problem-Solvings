#include<iostream>
using namespace std;

class integer
{
    int a,b;
public:
    integer();
    void show()
    {
        cout <<"a="<<a;
        cout<<"b="<<b;
    }
};
integer ::integer()
{
    a=10;
    b=10;
}
int main ()
{
    integer obj;
    obj.show();
    return 0;
}

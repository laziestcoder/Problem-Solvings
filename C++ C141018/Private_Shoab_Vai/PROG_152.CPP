// Generic Class
#include<iostream>
using namespace std;

template<typename x>

class data
{
    x a;
public:
    void input(x c)
    {
        a = c;
    }
    void show()
    {
        cout << a << endl;
    }
};

int main()
{
    data<int> ob;
    ob.input(13);
    ob.show();
    return 0;
}

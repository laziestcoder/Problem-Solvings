#include<iostream>
using namespace std;

class add
{
public:
    int a,b;
    void input()
    {
        cin >> a >> b;
    }
    void show()
    {
        cout << a + b << endl;
    }
};
int main()
{
    add ob;
    ob.input();
    ob.show();
    return 0;
}

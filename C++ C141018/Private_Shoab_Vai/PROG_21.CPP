//Inheritance
#include<iostream>
using namespace std;
class rect // Base Class
{
public:
    int l,w;
    int area()
    {
        return l * w;
    }
};
class cube:public rect // Derived Class
{
public:
    int h;
    int vol()
    {
        return area() * h;
    }
};
int main()
{
    rect r;
    cin >> r.l >> r.w;
    cout << r.area() << endl;
    cube c;
    cin >> c.l >> c.w >> c.h;
    cout << c.vol() << endl;
    return 0;
}

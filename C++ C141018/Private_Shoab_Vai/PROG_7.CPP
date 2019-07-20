#include<iostream>
using namespace std;
#define PI 3.11416
class circle
{
public:
    float r;
    void area()
    {
        cout << PI * r * r << endl;
    }
    void perim()
    {
        cout << 2 * PI * r << endl;
    }
    void input()
    {
        cin >> r;
    }
};
int main()
{
    circle ob;
    ob.input();
    ob.area();
    ob.perim();
}

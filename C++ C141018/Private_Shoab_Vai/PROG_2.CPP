#include<iostream>
using namespace std;

class cube
{
public:
    int l,w,h;
    int volume()
    {
        return l*w*h;
    }
};
int main()
{
     cube c1,c2;
     cin >> c1.l >> c1.w >> c1.h;
     cout << c1.volume() << endl;
     cin >> c2.l >> c2.w >> c2.h;
     cout << c2.volume() << endl;
     return 0;
}

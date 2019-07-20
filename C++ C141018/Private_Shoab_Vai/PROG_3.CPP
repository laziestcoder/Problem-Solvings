#include<iostream>
using namespace std;

class cube
{
public:
    int l,w,h;
    void input()
    {
        cin >> l >> w >> h;
    }
    int volume()
    {
        return l*w*h;
    }
};
int main()
{
    cube c1,c2;
    c1.input();
    cout << c1.volume() << endl;
    c2.input();
    cout << c2.volume() << endl;
    return 0;
}

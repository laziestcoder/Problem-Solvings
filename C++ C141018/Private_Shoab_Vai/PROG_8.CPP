#include<iostream>
using namespace std;
class myclass
{
    int a;
public:
    void set_a();
    void show_a();
};
void myclass::set_a()
{
    cin >> a;
}
void myclass::show_a()
{
    cout << a << endl;
}
int main()
{
    myclass ob;
    ob.set_a();
    ob.show_a();
    return 0;
}

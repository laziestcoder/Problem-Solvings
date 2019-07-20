// default catch
#include<iostream>
using namespace std;

void func(int x)
{
    try
    {
        if(x==1)
            throw 'a';
        else if(x==2)
            throw x;
        else
            throw 13.9;
    }
    catch(double d)
    {
        cout << "double catch\n";
    }
    catch(...)
    {
        cout << "default catch\n";
    }
}

int main()
{
    cout << "start\n";
    func(1);
    func(2);
    func(3);
    cout << "finish\n";
    return 0;
}

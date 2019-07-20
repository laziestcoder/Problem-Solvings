#include<iostream>

using namespace std;

class samp
{
    int a;
    public:
    samp(int i)
    {
        a=i;
    }
    //for prefix
    samp operator++()
    {
        this->a++;
        return *this;
    }
    //for postfix
    samp operator++(int notused)
    {
        this->a++;
        return *this;
    }
    void show()
    {
        cout<<a<<endl;
    }
};

int main()
{
    samp ob(13);
    ob++;
    ob.show();
    ++ob;
    ob.show();
    return 0;
}

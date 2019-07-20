//prefix without equal
//++ob1;

#include<iostream>

using namespace std;

class myclass
{
    int x,y;
    public:
    myclass(int a, int b)
    {
        x=a;
        y=b;
    }
    myclass()
    {
        x=y=0;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
    void operator++()
    {
        this->x=this->x+1;
        this->y=this->y+1;
    }
};

int main()
{
    myclass ob1(10,2);
    ++ob1;
    ob1.show();
    return 0;
}

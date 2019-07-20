//postfix with equal
//ob2 = ob1++;

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
    myclass operator++(int notused)
    {
        this->x=this->x+1;
        this->y=this->y+1;
        return *this;
    }
};

int main()
{
    myclass ob1(10,2), ob2;
    ob2=ob1++;
    ob1.show();
    ob2.show();
    return 0;
}

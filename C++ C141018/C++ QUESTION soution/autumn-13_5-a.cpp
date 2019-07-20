#include<iostream>

using namespace std;

class figure
{

    public:
    double dim1, dim2;
    figure(double d1, double d2)
    {
        dim1=d1;
        dim2=d2;
    }
    virtual double area() = 0;
};

class rectangle : public figure
{
    public:
    rectangle(double d1, double d2) : figure(d1,d2){}
    double area()
    {
        return dim1*dim2;
    }
};

class triangle : public figure
{
    public:
    triangle(double d1, double d2) : figure(d1,d2){}
    double area()
    {
        return 0.5*dim1*dim2;
    }
};

int main()
{
    triangle tob(12,10);
    rectangle rob(12,10);
    figure *f;

    f = &tob;
    cout<<f->area()<<endl;

    f=&rob;
    cout<<f->area()<<endl;

    return 0;
}

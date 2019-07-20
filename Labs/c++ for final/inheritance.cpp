#include<iostream>

using namespace std;

class base
{

    int x,n;

public:

    void setx(int n)
    {

        x=n;

    }

    void showx()
    {

        cout<<"X: "<<x<<endl;
    }




};


class derived:public base
{
    int y,n;

    public:

    void sety(int n)
    {

        y=n;

    }

    void showy()
    {

        cout<<"Y: "<<y<<endl;
    }


};


int main()

{

    derived ob;

    ob.setx(10); /// accsessing base class function

    ob.showx();


    ob.sety(20);

    ob.showy();


}

#include <iostream> //CLASS IMPLEMENTATION

using namespace std;

class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);

//function define inside class
    void putdata(void)
    {
        cout << "Number : " << number << endl;
        cout << "Cost   : " << cost << endl;
    }
};

    //menber function definition
    void item :: getdata(int a,float b)   //use membership lable
    {
        number = a; //private variables
        cost = b;   //directly used
    }


int main()
{
    item x;

    cout << "\n Object x " << endl;

    x.getdata(100,299.95);
    x.putdata();

    item y;
    cout << "\n Object y " << endl;

    y.getdata(200,175.50);
    y.putdata();

return 0;
}

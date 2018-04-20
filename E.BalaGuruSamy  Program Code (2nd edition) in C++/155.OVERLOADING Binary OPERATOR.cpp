#include <iostream> //155.OVERLOADING Binary OPERATOR
using namespace std;

class RANA
{
    float x;
    float y;

public:
    RANA(){ }
    RANA(float a,float b)
    {
        x=a;
        y=b;
    }

    RANA operator+(RANA);
    void display(void);
};


RANA RANA :: operator+(RANA S)
{
    RANA temp;

    temp.x = x + S.x;
    temp.y = y + S.y;

    return(temp);
}


void RANA :: display(void)
{
    cout << x <<"+"<< y <<"\n";
}

int main()
{
    RANA C1,C2,C3;
    C1 = RANA(2.5,3.5);
    C2 = RANA(1.6,2.7);
    C3 = C1 + C3;

    cout << "C1: ";    C1.display();
    cout << "C2: ";    C2.display();
    cout << "C3: ";    C3.display();

return 0;
}

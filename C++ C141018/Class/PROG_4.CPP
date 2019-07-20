// Balagurusamy Ch: 6, 151 Page, Overloaded Constructors
#include<iostream>

using namespace std;

class complex
{
    float x,y;
public:
    complex(){} // constructor no arg
    complex(float a){x = y = a;}    // constructor-one arg
    complex(float real, float imag) // constructor-two args
    {
        x = real; y = imag;
    }

    friend complex sum(complex, complex);
    friend void show(complex);
};
complex sum(complex c1, complex c2) // friend
{
    complex c3;
    c3.x = c1.x + c2.y;
    c3.y = c1.y + c2.y;
    return(c3);
}
void show(complex c)    // friend
{
    cout << c.x << " + j" << c.y << "\n";
}
int main()
{
    complex A(2.7, 3.5);    // define & initialize
    complex B(1.6); // define & initialize
    complex C;  // define

    C = sum(A, B);  // sum() is a friend
    cout << "A = "; show(A);
    cout << "B = "; show(B);
    cout << "C = "; show(C);

//Another way to give initial values (second method)

    complex P,Q,R;  // define P,Q,R
    P = complex(2.5,3.9);   // initialize P
    Q = complex(1.6,2.5);   // initialize Q
    R = sum(P,Q);

    cout << "\n";
    cout << "P = "; show(P);
    cout << "Q = "; show(Q);
    cout << "R = "; show(R);

    return 0;
}


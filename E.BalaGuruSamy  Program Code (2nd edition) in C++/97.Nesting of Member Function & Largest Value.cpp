#include <iostream> //CLASS IMPLEMENTATION

using namespace std;

class set
{
    int m,n;

public:
    void input(void);
    void display(void);
    int largest(void);
};

    //menber function definition
    int set :: largest(void)   //use membership lable
    {
        if (m>=n)
        return(m);
        else
        return (n);
    }

    void set :: input(void)
    {
        cout << "Input values of m and n " << endl;
        cin >> m >> n;
    }


    void set :: display(void)
    {
        cout << "Largest value : " << largest() << endl;
    }

int main()
{
    set A;

    A.input();
    A.display();

return 0;
}

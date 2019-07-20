//Constructor and Destructor
#include<iostream>
using namespace std;
class myclass
{
public:
    myclass()
    {
        cout << "Constructing\n";
    }
    ~myclass()
    {
        cout << "Destructing\n";
    }
};
int main()
{
    myclass ob1,ob2;
    return 0;
}

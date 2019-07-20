// Friend Function: 107 Page
// Exam a ata likhte hobe
#include<iostream>
using namespace std;

class myclass
{
    int i;
public:
    void set_i(int x)
    {
        i = x;
    }
    friend void show(myclass temp);
};
void show(myclass temp)
{
    cout << temp.i << endl; // temp die Private member i ke access kora hocche
}
int main()
{
    myclass ob1,ob2;
    ob1.set_i(13);
    ob2.set_i(14);
    show(ob1); // 13, Friend function ke dot(.) die access kore na, object die access kore
    show(ob2); // 14
    return 0;
}

//Friend Function:
//    1. It is not a member function
//    2. It has access to private members of a class
//    3. To create friend write the prototype of function inside class. Before prototype write
//        the keyword friend.

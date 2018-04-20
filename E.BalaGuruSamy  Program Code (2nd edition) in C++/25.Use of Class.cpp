#include<iostream> //Use of Class-(Page-25)
using namespace std;

class parson
{
    char name[30];
    int age;

    public:
        void getdata(void);
        void display(void);
};

void parson :: getdata(void)
{
    cout << "Enter Name: " ;
    cin >> name;
    cout << "Enter Age : ";
    cin >> age;
}

void parson :: display(void)
{
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
}


int main()
{
    parson p;

    p.getdata();
    p.display();

return 0;
}

//110.ARRAYS OF OBJECTS//
#include <iostream>
#include <conio.h>
using namespace std;

class employee
{
    char name[30];  //string as class member
    char age;

public:
    void getdata(void);
    void putdata(void);
};


void employee::getdata(void)
{
    cout << "Enter The Name : ";
    cin >> name;
    cout << "Enter Age : ";
    cin >> age;
    cout << endl;
}

void employee::putdata(void)
{
    cout << "\nNAME : " << name << endl;
    cout << "AGE : " << age << endl;
}



int main()
{
    int size=3;
    employee manager[size];


    for(int i=0;i<size;i++)
    {
        cout << "\nDetails of manager :" << i+1 << "\n";
        manager[i].getdata();
    }
cout << "\n";

for (int i=0;i<size;i++)
{
    cout << "\nManager: " << i+1 << "\n";
    manager[i].putdata();
}
getch();
return 0;
}

//8.6:Virtual Base Class(Page-205)
#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_number;
    public:
    void get_number(int a)
    {
    roll_number = a;
    }
    void put_number(void)
    {
    cout << "Roll Number       : " << roll_number <<endl;
    }
};


class test : virtual public student
{
    protected:
    float sub1;
    float sub2;
    public:
    void get_marks(float x,float y)
    {
        sub1 = x;sub2 = y;
    }

    void put_marks(void)
    {
        cout << "Marks in Subject 1: " << sub1 << endl;
        cout << "Marks in Subject 2: " << sub2 <<endl;
    }
};


class sports : virtual public student
{
    protected:
    float score;
    public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "Sports Score      : " << score << "\n";
    }
};

class result : public test,public sports
{
    float total;
    public :
    void display(void);
};

void result :: display (void)
{
    total = sub1+sub2+score;
    put_number ();
    put_marks();
    put_score();
    cout << "Total\t          : " << total <<endl;
}

int main()
{
    result student1;
    student1.get_number(111);
    student1.get_marks(75.0,59.5);
    student1.get_score(6.0);
    student1.display();

    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your final grade: ";

    double totalpoint;
    cin >> totalpoint;

    cout << "You have entered: " << totalpoint << endl;

    char letterGrade;

    if(totalpoint >= 90 && totalpoint <= 100)
    {
        letterGrade = 'A';
    }
    else if(totalpoint >= 80 && totalpoint < 90)
    {
        letterGrade = 'B';
    }
    else if(totalpoint >= 70 && totalpoint < 80)
    {
        letterGrade = 'C';
    }
    else if(totalpoint >= 60 && totalpoint < 70)
    {
        letterGrade = 'D';
    }
    else if(totalpoint >= 0 && totalpoint < 60)
    {
        letterGrade = 'F';
    }
    else
    {
        cout << "Error!!!" << endl;
        letterGrade = '?';
    }
    cout << "Your final grade is: " << letterGrade << endl;

    return 0;
}

#include<iostream>
using namespace std;

class card
{
public:
    char title[30];
    char author[30];
    int copy;

    void store()
    {
        cin.getline(title,30);
        cin.getline(author,30);
        cin >> copy;
    }
    void show()
    {
        cout << title <<" "<< author <<" " << copy << "\n";
    }
};
int main()
{
    card ob;
    ob.store();
    ob.show();
    return 0;
}

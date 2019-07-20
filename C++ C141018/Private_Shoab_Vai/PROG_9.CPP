#include<iostream>
using namespace std;

class card
{
    char title[30];
    char author[30];
    int copy;
public:
    void store();
    void show();
};
void card::store()
{
    cin.getline(title,30);
    cin.getline(author,30);
    cin >> copy;
}
void card::show()
{
    cout << title << " " << author << " " << copy << endl;
}
int main()
{
    card ob;
    ob.store();
    ob.show();
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << setw(6) << setfill('*') << setiosflags(ios::internal)
    << setiosflags(ios::showpos) << 10;
    return 0; // +***10
}


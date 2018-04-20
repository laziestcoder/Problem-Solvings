//Working With Single FILE 11.1
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
ofstream outf("ITEM.txt");
      char name[10];
      int cost;

     cout << "Enter ITEM Name:";
     cin >> name;
     outf << name << "\n";

     cout << "Enter ITEM Cost:";
     cin >> cost;
     outf << cost << "\n";
     outf.close();

ifstream inf("ITEM.txt");
     inf >> name;
     inf >> cost;
     cout << "\n";
     cout << "Enter ITEM Name:" << name << "\n";
     cout << "Enter ITEM Cost:" << cost << "\n";
     return 0;
}

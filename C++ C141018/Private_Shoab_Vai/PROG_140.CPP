#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("bin.txt");
    int x;
    x = 100000000;
    fout.write((char *)&x,sizeof(x)); // mukhosto korte hobe
    fout.close();
    ifstream fin;
    fin.open("bin.txt");
    int y = -99;
    fin.read((char *)&y,sizeof(y)); // y = x hoye jacche
    cout << y; // 100000000 show korbe
    fin.close();
    return 0;
}





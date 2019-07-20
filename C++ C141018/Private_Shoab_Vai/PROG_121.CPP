// File theke input nie Console-e output
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[10];
    int i;
    ifstream fin("read.txt");
    for(i=1;i<=3;i++)
    {
        fin >> str;
        cout << str << endl;
    }
    fin.close();
    return 0;
}

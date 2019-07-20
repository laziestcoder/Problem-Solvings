// File theke input nie File-e output
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[10];
    int i;
    ifstream fin;
    fin.open("input.txt");
    ofstream fout;
    fout.open("output.txt");
    for(i=1;i<=3;i++)
    {
        fin >> str;
        fout << str << endl;
    }
    fin.close();
    fout.close();
    return 0;
}


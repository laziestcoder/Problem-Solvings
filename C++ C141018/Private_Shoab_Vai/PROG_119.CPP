#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[10];
    int i;
    ofstream fout("test.txt");
    for(i=1;i<=3;i++)
    {
        cin >> str;
        fout << str << endl;
    }
    fout.close();
    return 0;
}

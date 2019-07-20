// Console theke input nie file-e Output
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[10];
    int i;
    ofstream fout; // ofstream is for writing in file
    fout.open("test.txt");
    for(i=1;i<=3;i++)
    {
        cin >> str;
        fout << str << endl;
    }
    fout.close();
    return 0;
}

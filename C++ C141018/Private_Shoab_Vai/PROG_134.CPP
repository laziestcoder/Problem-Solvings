#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fp("test1.txt",ios::in|ios::out|ios::trunc);
    char ch;
    for(ch='a';ch<='z';ch++)
        fp.put(ch);
    fp.seekg(-10,ios::end);
    fp.get(ch);
    cout << ch; // q show korbe
    fp.close();
    return 0;
}




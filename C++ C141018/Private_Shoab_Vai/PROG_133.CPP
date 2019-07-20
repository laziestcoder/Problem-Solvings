#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fp("test1.txt",ios::in|ios::out|ios::trunc);
    char ch;
    for(ch='a';ch<='z';ch++)
        fp.put(ch);
    fp.seekg(5,ios::beg); // prothom theke 5 byte pore 'f' ache
    fp.get(ch);
    cout << ch << endl; // f show korbe
    fp.seekg(-2,ios::cur); // 2 ghor pichone
    fp.get(ch);
    cout << ch; // e show korbe
    fp.close();
    return 0;
}




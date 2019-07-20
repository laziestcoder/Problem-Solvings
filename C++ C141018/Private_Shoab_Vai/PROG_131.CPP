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
    cout << ch; // f show korbe
    fp.close();
    return 0;
}



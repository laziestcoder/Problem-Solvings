#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fp("test1.txt",ios::in|ios::out|ios::trunc);
    char ch;
    for(ch='a';ch<='z';ch++)
        fp.put(ch);
    fp.seekg(10,ios::beg);
    fp.get(ch);
    cout << ch; // k show korbe
    fp.seekg(-3,ios::cur);
    fp.get(ch);
    cout << ch; // i show korbe
    fp.seekg(4,ios::cur);
    fp.get(ch);
    cout << ch; // n show korbe
    fp.seekg(-20,ios::end);
    fp.get(ch);
    cout << ch; // g show korbe
    cout << fp.tellp(); // 7 show korbe
    fp.close();
    return 0;
}





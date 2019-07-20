#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fp("test2.txt",ios::in|ios::out|ios::trunc);
    char ch;
    for(ch='a';ch<='z';ch++)
        fp.put(ch);
    fp.seekp(-15,ios::end);
    fp.put('X');
    cout << fp.tellp(); // 12 show korbe
    fp.close();
    return 0;
}





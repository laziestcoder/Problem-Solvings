#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fp("test1.txt",ios::in|ios::out|ios::ate);
    // ate dile ager jinisher sathe jukto korbe
    char ch;
    for(ch='A';ch<='Z';ch++)
        fp.put(ch);
    fp.close();
    return 0;
}


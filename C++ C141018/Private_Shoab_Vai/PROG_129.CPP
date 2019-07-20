#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fp("test1.txt",ios::in|ios::out|ios::trunc);
    // trunc mane muche fela(file-e kichu thakle muche felbe)
    char ch;
    for(ch='a';ch<='z';ch++)
        fp.put(ch);
    fp.close();
    return 0;
}

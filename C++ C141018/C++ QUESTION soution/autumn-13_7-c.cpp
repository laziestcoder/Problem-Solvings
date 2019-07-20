#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char ch;
    ifstream fin("test.txt");
    while(1)
    {
        fin.get(ch);
        if(fin.eof())
            break;
        cout<<ch<<endl;
    }
    fin.close();
    return 0;
}

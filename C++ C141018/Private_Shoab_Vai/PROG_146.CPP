#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int chk;
    chk = remove("change.txt");
    if(chk==0)
        cout << "Successful";
    else
        cout << "Not Successful";

    return 0;
}

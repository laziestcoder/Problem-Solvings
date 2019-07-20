#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int chk;
    chk = rename("main.txt","change.txt"); // ei File ta thakle "Not Successful"
    if(chk==0)
        cout << "Successful";
    else
        cout << "Not Successful";
    return 0;
}

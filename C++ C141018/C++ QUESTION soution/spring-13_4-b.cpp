#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    char ch;
    cout<<hex<<uppercase<<11<<endl;
    cout<<setw(10)<<"iiuc"<<endl;
    //give some space and then input a single character
    cin>>skipws>>ch;
    //in the output you will see all the white spaces are skipped
    //only the character is shown
    cout<<ch;
    return 0;
}

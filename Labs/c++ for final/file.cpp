#include<iostream>
#include<fstream>
using namespace std;


int main()
{

    int a,b;

    ofstream outfile;

    outfile.open("temporary.dat");

    cout<<"Enter your id"<<endl;

    cin>>a;

    outfile<<a<<endl;


    outfile.close();


    ifstream infile;

    infile.open("temporary.dat");


    cout<<"number from the file "<<endl;

    infile>>b;


    cout<<b<<endl;

    return 0;





}

// P: 331
// Creating files with open()function

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout; // create output stream
    fout.open("country"); // connect "country" to it

    fout << "United States of America\n";
    fout << "Unitd Kingdom\n";
    fout << "South Korea\n";

    fout.close(); // disconnect "country" and

    fout.open("capital"); // connect "capital"

    fout << "Washington\n";
    fout << "London\n";
    fout << "Seoul\n";

    fout.close(); // disconnect "capital"

    // Reading the files
    const int N = 80;
    char line[N]; // size of line

    ifstream fin; // create input stream
    fin.open("country"); // connect "country" to it

    cout << "Contents of country file:\n\n";

    while(fin) // check end-of-file
    {
        fin.getline(line,N); // read a line
        cout << line << endl; // display it
    }
    fin.close(); // disconnect "country" and
    fin.open("capital"); // connect "capital"

    cout << "\nContent of capital file:\n\n";

    while(fin)
    {
        fin.getline(line,N);
        cout << line << endl;
    }
    fin.close();
    return 0;
}

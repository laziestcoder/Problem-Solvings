#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i;
    ofstream fout;
    fout.open("bin1.txt");
    int a[5]={10,20,30,40,50};
    fout.write((char *)&a,sizeof(a)); // array er jonno loop lagbe na
    fout.close();
    ifstream fin;
    fin.open("bin1.txt");
    int b[5] = {1,2,3,4,5};
    fin.read((char *)&b,sizeof(b));
    fin.close();
    for(i=0;i<5;i++)
        cout << b[i] << " "; // 10 20 30 40 50

    return 0;
}






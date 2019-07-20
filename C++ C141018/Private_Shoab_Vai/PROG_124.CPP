#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //country.txt(Bangladesh,England,USA),
    //capital.txt(Dhaka,London,Washington)
    // Console-e duita pashapashai dekhabe

    int i;
    char str1[30],str2[30];
    ifstream fin1,fin2;
    fin1.open("country.txt");
    fin2.open("capital.txt");
    for(i=1;i<=3;i++)
    {
        fin1 >> str1;
        fin2 >> str2;
        cout << str1 << " " << str2 << endl;
    }
    fin1.close();
    fin2.close();
    return 0;
}



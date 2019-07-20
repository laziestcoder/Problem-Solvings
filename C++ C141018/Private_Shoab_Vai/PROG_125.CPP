//number.txt(10 ta number thakbe)
//odd.txt (odd gulu thakbe)
//even.txt (even gulu thakbe)
#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int i,x;
    ofstream fout;
    fout.open("number.txt");
    srand(time(NULL));
    for(i=1;i<=10;i++)
    {
        x=rand()%100+1;
        fout << x << endl;
    }
    fout.close();
    ifstream fin;
    fin.open("number.txt");
    ofstream fout1;
    fout1.open("even.txt");
    ofstream fout2;
    fout2.open("odd.txt");
    for(i=1;i<=10;i++)
    {
        fin >> x;
        if(x%2==0)
        {
            fout1 << x << endl;
        }
        else
        {
            fout2 << x << endl;
        }
    }
    fin.close();
    fout1.close();
    fout2.close();
    return 0;
}



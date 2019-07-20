#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int x,i;
    ofstream fout;
    fout.open("data.txt");
    srand(time(NULL));
    for(i=1;i<=10;i++) // 10 ta nie kaj korbo
    {
        x = rand()%100+1;
        fout << x << endl;
    }
    fout.close();
    return 0;
}

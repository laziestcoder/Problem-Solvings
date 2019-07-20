#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int x,i;
    srand(time(NULL));
    for(i=1;i<=10;i++)
    {
        x = rand()%100+1;
        cout << x << endl;
    }
    return 0;
}

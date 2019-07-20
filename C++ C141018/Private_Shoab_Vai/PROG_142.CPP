#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int x;
    srand(time(NULL));
    x = rand()%100+1;
    cout << x;
    return 0;
}

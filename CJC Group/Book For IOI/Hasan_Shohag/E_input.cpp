#include<iostream>

using namespace std;

int main()
{

    for(int i=0 ; i<100000 ; i++)
    {
        if(i%50==0)
            cout << "_";
        else
            cout << "^";
    }




    return 0;
}
